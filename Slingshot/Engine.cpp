#include "Engine.h"

LRESULT CALLBACK EngineProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	Engine* pEngine =
		reinterpret_cast<Engine*>
		(GetWindowLongPtr(hwnd, GWLP_USERDATA));

	if (pEngine) {
		return pEngine->HandleWindowMessage(hwnd, uMsg, wParam, lParam);
	}
	else {
		DestroyWindow(hwnd);
		PostQuitMessage(0);
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

bool Engine::Initialize(WINDOW_DESC& window_desc, RENDERER_DESC& renderer_desc)
{
	if ((m_pWindow = Window::Create(window_desc)) != nullptr) {

		HWND hWnd = m_pWindow->GetHandle();

		SetWindowLongPtr(
			hWnd, GWLP_USERDATA,
			reinterpret_cast<LONG_PTR>(this));
		SetWindowLongPtr(
			hWnd, GWLP_WNDPROC,
			reinterpret_cast<LONG_PTR>(EngineProc));

		m_isRunning = (m_pRenderer = Renderer::Create(hWnd, renderer_desc)) != nullptr;
	}

	if (m_isRunning) 
	{
		m_isRunning = m_pRenderer->Initialize();
		m_isRunning = EditStage(m_pStage);
		m_pTimer = new Timer();
	}

	return m_isRunning;
}

bool Engine::EditStage(Stage* stage)
{
	bool success;

	//Pipeline State
	//------------------------------
	PIPELINE_DESC pipeline_desc;
	pipeline_desc.VS_filename = "ColorVertexShader.cso";
	pipeline_desc.PS_filename = "ColorPixelShader.cso";

	m_pRenderer->SetPipelineState(pipeline_desc, VertexType::ColorShaderVertex);
	//------------------------------

	const int ENTITY_COUNT = 3;
	Entity* entityCollection = new Entity[ENTITY_COUNT];

	//Main Camera - ALWAYS SETUP WITH INDEX 0
	//------------------------------
	RECT winRect;
	GetWindowRect(m_pWindow->GetHandle(), &winRect);
	float winWidth = static_cast<float>(winRect.right - winRect.left);
	float winHeight = static_cast<float>(winRect.bottom - winRect.top);

	CAMERA_DESC camera_desc;
	camera_desc.lenseWidth = winWidth;
	camera_desc.lenseHeight = winHeight;

	TRANSFORM_DESC mc_transform_desc;
	mc_transform_desc.position = DirectX::XMFLOAT4(0.0f, 1.0f, -5.0f, 1.0f);

	entityCollection[0].SetCamera(camera_desc);
	entityCollection[0].SetTransform(mc_transform_desc);
	//------------------------------

	//Cube Object
	//------------------------------
	const int ENTITY0_VERTEX_COUNT = 8;
	const int ENTITY0_INDEX_COUNT = 14;

	ColorShaderVertex* cubeV_collection = new ColorShaderVertex[ENTITY0_VERTEX_COUNT];
	cubeV_collection[0].position = DirectX::XMFLOAT4(-2.0f, -2.0f, -2.0f, 1.0f);
	cubeV_collection[0].color = DirectX::XMFLOAT4(1.0f, 0.0f, 0.0f, 1.0f);
	cubeV_collection[1].position = DirectX::XMFLOAT4(-2.0f, 2.0f, -2.0f, 1.0f);
	cubeV_collection[1].color = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 1.0f);
	cubeV_collection[2].position = DirectX::XMFLOAT4(2.0f, -2.0f, -2.0f, 1.0f);
	cubeV_collection[2].color = DirectX::XMFLOAT4(0.0f, 0.0f, 1.0f, 1.0f);
	cubeV_collection[3].position = DirectX::XMFLOAT4(2.0f, 2.0f, -2.0f, 1.0f);
	cubeV_collection[3].color = DirectX::XMFLOAT4(1.0f, 1.0f, 0.0f, 1.0f);
	cubeV_collection[4].position = DirectX::XMFLOAT4(-2.0f, -2.0f, 2.0f, 1.0f);
	cubeV_collection[4].color = DirectX::XMFLOAT4(0.0f, 1.0f, 1.0f, 1.0f);
	cubeV_collection[5].position = DirectX::XMFLOAT4(-2.0f, 2.0f, 2.0f, 1.0f);
	cubeV_collection[5].color = DirectX::XMFLOAT4(1.0f, 0.0f, 1.0f, 1.0f);
	cubeV_collection[6].position = DirectX::XMFLOAT4(2.0f, -2.0f, 2.0f, 1.0f);
	cubeV_collection[6].color = DirectX::XMFLOAT4(0.5f, 1.0f, 0.0f, 1.0f);
	cubeV_collection[7].position = DirectX::XMFLOAT4(2.0f, 2.0f, 2.0f, 1.0f);
	cubeV_collection[7].color = DirectX::XMFLOAT4(0.5f, 0.0f, 1.0f, 1.0f);

	unsigned int* cubeI_collection = new unsigned int[ENTITY0_INDEX_COUNT];

	//Front
	cubeI_collection[0] = 0;
	cubeI_collection[1] = 1;
	cubeI_collection[2] = 2;
	cubeI_collection[3] = 3;

	cubeI_collection[4] = 7;
	cubeI_collection[5] = 1;

	cubeI_collection[6] = 5;
	cubeI_collection[7] = 0;

	cubeI_collection[8] = 4;
	cubeI_collection[9] = 2;

	cubeI_collection[10] = 6;
	cubeI_collection[11] = 7;

	cubeI_collection[12] = 4;
	cubeI_collection[13] = 5;

	MESH_DESC cubeM_desc;
	cubeM_desc.topology = D3D11_PRIMITIVE_TOPOLOGY::D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP;
	cubeM_desc.vertexCollection = new ColorShaderVertex[ENTITY0_VERTEX_COUNT];
	memcpy(cubeM_desc.vertexCollection, cubeV_collection, sizeof(ColorShaderVertex) * ENTITY0_VERTEX_COUNT);
	cubeM_desc.vertexCount = ENTITY0_VERTEX_COUNT;
	cubeM_desc.indexCollection = new unsigned int[ENTITY0_INDEX_COUNT];
	memcpy(cubeM_desc.indexCollection, cubeI_collection, sizeof(unsigned int) * ENTITY0_INDEX_COUNT);
	cubeM_desc.indexCount = ENTITY0_INDEX_COUNT;

	TRANSFORM_DESC cubeT_desc;
	cubeT_desc.position = DirectX::XMFLOAT4(0.0f, 2.0f, 20.0f, 1.0f);
	entityCollection[1].SetTransform(cubeT_desc);

	entityCollection[1].SetModel(
		*m_pRenderer->GetGraphicsContext(), cubeM_desc, VertexType::ColorShaderVertex);
	//------------------------------

	//Ground Object
	//------------------------------
	const int ENTITY1_VERTEX_COUNT = 4;
	const int ENTITY1_INDEX_COUNT = 4;

	ColorShaderVertex* groundV_Collection = new ColorShaderVertex[ENTITY1_VERTEX_COUNT];
	groundV_Collection[0].position = DirectX::XMFLOAT4(-20.0f, -3.0f, 0.0f, 1.0f);
	groundV_Collection[0].color = DirectX::XMFLOAT4(0.0f, 0.4f, 0.3f, 1.0f);
	groundV_Collection[1].position = DirectX::XMFLOAT4(-20.0f, -3.0f, 40.0f, 1.0f);
	groundV_Collection[1].color = DirectX::XMFLOAT4(0.0f, 0.4f, 0.3f, 1.0f);
	groundV_Collection[2].position = DirectX::XMFLOAT4(20.0f, -3.0f, 0.0f, 1.0f);
	groundV_Collection[2].color = DirectX::XMFLOAT4(0.0f, 0.4f, 0.3f, 1.0f);
	groundV_Collection[3].position = DirectX::XMFLOAT4(20.0f, -3.0f, 40.0f, 1.0f); 
	groundV_Collection[3].color = DirectX::XMFLOAT4(0.0f, 0.4f, 0.3f, 1.0f);

	unsigned int* groundI_Collection = new unsigned int[ENTITY1_INDEX_COUNT];
	groundI_Collection[0] = 0;
	groundI_Collection[1] = 1;
	groundI_Collection[2] = 2;
	groundI_Collection[3] = 3;

	MESH_DESC groundM_desc;
	groundM_desc.topology = D3D11_PRIMITIVE_TOPOLOGY::D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP;
	groundM_desc.vertexCollection = new ColorShaderVertex[ENTITY1_VERTEX_COUNT];
	memcpy(groundM_desc.vertexCollection, groundV_Collection, sizeof(ColorShaderVertex) * ENTITY1_VERTEX_COUNT);
	groundM_desc.vertexCount = ENTITY1_VERTEX_COUNT;
	groundM_desc.indexCollection = new unsigned int[ENTITY1_INDEX_COUNT];
	memcpy(groundM_desc.indexCollection, groundI_Collection, sizeof(unsigned int) * ENTITY1_INDEX_COUNT);
	groundM_desc.indexCount = ENTITY1_INDEX_COUNT;

	entityCollection[2].SetModel(
		*m_pRenderer->GetGraphicsContext(), groundM_desc, VertexType::ColorShaderVertex);
	//------------------------------

	STAGE_DESC stage_desc;
	stage_desc.entityCollection = new Entity[ENTITY_COUNT];
	memcpy(stage_desc.entityCollection, entityCollection, sizeof(Entity) * ENTITY_COUNT);
	stage_desc.entityCount = ENTITY_COUNT;
	stage_desc.mainCameraId = 0;
	success = ((m_pStage = Stage::Create(0, stage_desc)) != nullptr);

	SAFE_DELETE_ARRAY(cubeV_collection);
	SAFE_DELETE_ARRAY(cubeI_collection);
	SAFE_DELETE_ARRAY(groundV_Collection);
	SAFE_DELETE_ARRAY(groundI_Collection);
	SAFE_DELETE_ARRAY(entityCollection);

	return success;
}

int Engine::Run()
{
	MSG msg = {};
	while (m_isRunning) 
	{
		m_pTimer->OnFrameStart();
		while (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE)) 
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		m_pStage->GetEntity(1)->GetTransform()->RotateEulerAngles(0.0f, 
			0.01f * m_pTimer->m_smoothstepF, 
			0.02f * m_pTimer->m_smoothstepF);
		m_pRenderer->OnFrameRender(*m_pStage);
	}
	return (int)msg.wParam;
}

void Engine::Shutdown()
{
	SAFE_SHUTDOWN(m_pStage);
	SAFE_SHUTDOWN(m_pRenderer);
	SAFE_SHUTDOWN(m_pWindow);
	SAFE_DELETE(m_pTimer);
}

LRESULT Engine::HandleWindowMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	case WM_LBUTTONDOWN:
	{
		SetCapture(hWnd);
		RECT rcClip;
		GetClientRect(hWnd, &rcClip);
		POINT ptMin = { rcClip.left, rcClip.top };
		POINT ptMax = { rcClip.right, rcClip.bottom };
		ClientToScreen(hWnd, &ptMin);
		ClientToScreen(hWnd, &ptMax);
		SetRect(&rcClip, ptMin.x, ptMin.y, ptMax.x, ptMax.y);
		ClipCursor(&rcClip);
		ShowCursor(false);
		int xOffset = (ptMax.x - ptMin.x);
		int yOffset = (ptMax.y - ptMin.y);
		int xCoord = ptMax.x - xOffset / 2;
		int yCoord = ptMax.y - yOffset / 2;
		SetCursorPos(xCoord, yCoord);
		m_pStage->GetMainCamera()->GetCamera()->SetMouseCoord(xCoord, yCoord);
		m_pStage->GetMainCamera()->GetCamera()->SetRotateStatus(true);
	}
	break;
	case WM_MOUSEMOVE:
	{
		if (m_pStage->GetMainCamera()->GetCamera()->GetRotateStatus()) {
			int xCoord = GET_X_LPARAM(lParam);
			int yCoord = GET_Y_LPARAM(lParam);
			POINT pt = { xCoord, yCoord };
			ClientToScreen(hWnd, &pt);
			int lastMouseX, lastMouseY;
			m_pStage->GetMainCamera()->GetCamera()->GetMouseCoord(lastMouseX, lastMouseY);
			m_pStage->GetMainCamera()->GetCamera()->SetMouseCoord(pt.x, pt.y);
			float offsetX = static_cast<float>(pt.x) - lastMouseX;
			float offsetY = static_cast<float>(pt.y) - lastMouseY;
			float pitch = offsetX * m_pStage->GetMainCamera()->GetCamera()->GetRotationSpeed();
			float head = offsetY * m_pStage->GetMainCamera()->GetCamera()->GetRotationSpeed();
			m_pStage->GetMainCamera()->GetTransform()->RotateEulerAngles(head, pitch, 0.0f);
		}
	}
	break;
	case WM_KEYDOWN:
	{
		using namespace DirectX;
		switch (wParam) {
		case 0x57: //W 
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(
				m_pStage->GetMainCamera()->GetCamera()->GetTranslationSpeed() * 
				m_pStage->GetMainCamera()->GetTransform()->GetForwardDir() * 
				m_pTimer->m_smoothstepF);
		}
		break;
		case 0x41: //A
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(
				m_pStage->GetMainCamera()->GetCamera()->GetTranslationSpeed() * -1.0f * 
				m_pStage->GetMainCamera()->GetTransform()->GetRightDir() * 
				m_pTimer->m_smoothstepF);
		}
		break;
		case 0x53: //S
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(
				m_pStage->GetMainCamera()->GetCamera()->GetTranslationSpeed() * -1.0f * 
				m_pStage->GetMainCamera()->GetTransform()->GetForwardDir() * 
				m_pTimer->m_smoothstepF);
		}
		break;
		case 0x44: //D
		{
			m_pStage->GetMainCamera()->GetTransform()->Translate(
				m_pStage->GetMainCamera()->GetCamera()->GetTranslationSpeed() * 
				m_pStage->GetMainCamera()->GetTransform()->GetRightDir() * 
				m_pTimer->m_smoothstepF);
		}
		break;
		case VK_ESCAPE:
		{
			ReleaseCapture();
			ClipCursor(nullptr);
			ShowCursor(true);
			m_pStage->GetMainCamera()->GetCamera()->SetRotateStatus(false);
			return DefWindowProc(hWnd, uMsg, wParam, lParam);
		}
		break;
		}
	}
	break;
	case WM_KILLFOCUS:
	{
		ReleaseCapture();
		ShowCursor(true);
		m_pStage->GetMainCamera()->GetCamera()->SetRotateStatus(false);
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	break;
	case WM_QUIT:
		DestroyWindow(hWnd);
	case WM_DESTROY:
	{
		m_isRunning = false;
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

Renderer* Engine::GetRenderer()
{
	return m_pRenderer;
}
