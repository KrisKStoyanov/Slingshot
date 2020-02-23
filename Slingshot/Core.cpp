#include "Core.h"

LRESULT CALLBACK CoreProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	Core* pCore =
		reinterpret_cast<Core*>
		(GetWindowLongPtr(hwnd, GWLP_USERDATA));

	if (pCore) {
		return pCore->HandleMessage(hwnd, uMsg, wParam, lParam);
	}
	else {
		DestroyWindow(hwnd);
		PostQuitMessage(0);
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

Core* Core::Create(HWND hWnd)
{
	return new Core(hWnd);
}

Core::Core(HWND hWnd) : 
	m_hWnd(hWnd), m_pStage(nullptr), 
	m_pStageEntities(nullptr), m_stageEntityCount(0), m_isActive(true)
{
	SetWindowLongPtr(
		hWnd, GWLP_USERDATA,
		reinterpret_cast<LONG_PTR>(this));
	SetWindowLongPtr(
		hWnd, GWLP_WNDPROC,
		reinterpret_cast<LONG_PTR>(CoreProc));
}

LRESULT Core::HandleMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	case WM_LBUTTONDOWN:
	{
		SetCapture(hWnd);
		RECT rcClip;		
		GetClientRect(hWnd, &rcClip);
		POINT pt = { rcClip.left, rcClip.top };
		POINT pt2 = { rcClip.right, rcClip.bottom };
		ClientToScreen(hWnd, &pt);
		ClientToScreen(hWnd, &pt2);
		SetRect(&rcClip, pt.x, pt.y, pt2.x, pt2.y);
		ClipCursor(&rcClip);
		ShowCursor(false);
	}
	break;
	case WM_MOUSEMOVE:
	{
		float xCoord = static_cast<float>(GET_X_LPARAM(lParam));
		float yCoord = static_cast<float>(GET_Y_LPARAM(lParam));
		float lastMouseX, lastMouseY;
		m_pStage->GetMainCamera()->GetCamera()->GetMouseCoord(lastMouseX, lastMouseY);
		m_pStage->GetMainCamera()->GetCamera()->SetMouseCoord(xCoord, yCoord);
		float offsetX = xCoord - lastMouseX;
		float offsetY = yCoord - lastMouseY;
		float pitch = offsetX * m_pStage->GetMainCamera()->GetCamera()->GetRotationSensitivity();
		float head = offsetY * m_pStage->GetMainCamera()->GetCamera()->GetRotationSensitivity();
		//m_pStage->GetMainCamera()->GetTransform()->Rotate(pitch, head, 0.0f);
	}
	break;
	case WM_KEYDOWN:
	{
		switch (wParam) {
		case 0x57: //W 
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(DirectX::XMVectorSet(0.0f, 0.0, 1.0, 0.0f));
		}
		break;
		case 0x41: //A
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(DirectX::XMVectorSet(-1.0f, 0.0, 0.0, 0.0f));
		}
		break;
		case 0x53: //S
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(DirectX::XMVectorSet(0.0f, 0.0, -1.0, 0.0f));
		}
		break;
		case 0x44: //D
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(DirectX::XMVectorSet(1.0f, 0.0, 0.0, 0.0f));
		}
		break;
		case VK_ESCAPE:
		{
			DestroyWindow(hWnd);
		}
		break;
		}
	}
	break;
	case WM_KILLFOCUS: 
	{
		ReleaseCapture();
		ShowCursor(true);
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	break;
	case WM_QUIT:
	case WM_DESTROY:
	{
		m_isActive = false;
		PostQuitMessage(0);
	}
	break;
	default:
	{
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	break;
	}
	return 0;
}

void Core::LoadStage(Stage& stage)
{
	m_pStage = new Stage(stage);
	m_stageEntityCount = m_pStage->GetEntityCount();
	m_pStageEntities = new Entity[m_stageEntityCount];
	memcpy(m_pStageEntities, stage.GetEntityCollection(), sizeof(Entity) * m_stageEntityCount);
}

bool Core::OnUpdate(Renderer& renderer)
{
	renderer.OnFrameRender(m_pStage);
	return m_isActive;
}

void Core::Shutdown(void)
{
	SAFE_SHUTDOWN(m_pStage);
}

Stage* Core::GetStage()
{
	return m_pStage;
}
