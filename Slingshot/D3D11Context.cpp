#include "D3D11Context.h"

D3D11Context* D3D11Context::Create(HWND hWnd)
{
	return new D3D11Context(hWnd);
}

D3D11Context::D3D11Context(HWND hWnd)
{
	RECT winRect;
	GetWindowRect(hWnd, &winRect);
	UINT winWidth = winRect.right - winRect.left;
	UINT winHeight = winRect.bottom - winRect.top;
	
	CreateDeviceAndContext();

	CreateSwapChain(
		hWnd, winWidth, winHeight);

	CreatePrimaryResources();

	SetupViewport(winWidth, winHeight);
}

std::vector<IDXGIAdapter*> D3D11Context::QueryAdapters()
{
	IDXGIAdapter* pAdapter;
	std::vector<IDXGIAdapter*> vpAdapters;
	IDXGIFactory2* pFactory;

	DX::ThrowIfFailed(CreateDXGIFactory1(IID_PPV_ARGS(&pFactory)));
	for (UINT i = 0;
		pFactory->EnumAdapters(i, &pAdapter) != DXGI_ERROR_NOT_FOUND; ++i) {
		vpAdapters.push_back(pAdapter);
	}

	pFactory->Release();
	return vpAdapters;
}

IDXGIAdapter* D3D11Context::GetLatestDiscreteAdapter()
{
	std::vector<IDXGIAdapter*> vpAdapters = QueryAdapters();
	int adId = 0;
	size_t memCheck = 0;
	DXGI_ADAPTER_DESC ad;

	//Retrieve adapter ID with highest dedicated memory
	for (UINT i = 0; i < vpAdapters.size(); ++i) {
		vpAdapters[i]->GetDesc(&ad);
		if (ad.DedicatedVideoMemory > memCheck) {
			adId = i;
			memCheck = ad.DedicatedVideoMemory;
		}
	}
	IDXGIAdapter* adapter = vpAdapters[adId];
	return adapter;
}

void D3D11Context::CreateDeviceAndContext()
{
	UINT creationFlags = D3D11_CREATE_DEVICE_BGRA_SUPPORT;
#if defined(_DEBUG)
	creationFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

	D3D_FEATURE_LEVEL maxSupportedFeatureLevel = D3D_FEATURE_LEVEL_9_1;
	D3D_FEATURE_LEVEL featureLevels[] = {
		D3D_FEATURE_LEVEL_11_1,
		D3D_FEATURE_LEVEL_11_0,
		D3D_FEATURE_LEVEL_10_1,
		D3D_FEATURE_LEVEL_10_0,
		D3D_FEATURE_LEVEL_9_3,
		D3D_FEATURE_LEVEL_9_2,
		D3D_FEATURE_LEVEL_9_1
	};

	DX::ThrowIfFailed(D3D11CreateDevice(
		GetLatestDiscreteAdapter(),
		D3D_DRIVER_TYPE_UNKNOWN,
		nullptr,
		creationFlags,
		featureLevels,
		ARRAYSIZE(featureLevels),
		D3D11_SDK_VERSION,
		m_pDevice.GetAddressOf(),
		&maxSupportedFeatureLevel,
		m_pImmediateContext.GetAddressOf()));

#if defined(_DEBUG)
	SetupDebugLayer();
#endif
}

void D3D11Context::CreateSwapChain(
	HWND hWnd, UINT winWidth, UINT winHeight)
{
	DXGI_SWAP_CHAIN_DESC1 sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.Width = winWidth;
	sd.Height = winHeight;
	sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.Stereo = FALSE;
	sd.SampleDesc = { 1, 0 };
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.BufferCount = 2;
	sd.Scaling = DXGI_SCALING_STRETCH;
	sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
	sd.AlphaMode = DXGI_ALPHA_MODE_UNSPECIFIED;
	sd.Flags = 0;

	Microsoft::WRL::ComPtr<IDXGIFactory2> pFactory;
	DX::ThrowIfFailed(GetLatestDiscreteAdapter()->GetParent(IID_PPV_ARGS(&pFactory)));
	DX::ThrowIfFailed(pFactory->CreateSwapChainForHwnd(
		m_pDevice.Get(),
		hWnd,
		&sd,
		NULL,
		nullptr,
		m_pSwapChain.GetAddressOf()
	));
	
	SAFE_RELEASE(pFactory);
}

void D3D11Context::CreatePrimaryResources()
{
	ID3D11Texture2D* pBackBuffer;
	DX::ThrowIfFailed(m_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer)));
	if (pBackBuffer != nullptr) {
		DX::ThrowIfFailed(m_pDevice->CreateRenderTargetView(pBackBuffer, nullptr, m_pBackBufferRTV.GetAddressOf()));
		SAFE_RELEASE(pBackBuffer);
	}

	DXGI_SWAP_CHAIN_DESC1 swapChainDesc;
	DX::ThrowIfFailed(
		m_pSwapChain->GetDesc1(&swapChainDesc));

	ID3D11Texture2D* depthStencilBuffer;
	D3D11_TEXTURE2D_DESC depthStencilBufferDesc;
	ZeroMemory(&depthStencilBufferDesc, sizeof(depthStencilBufferDesc));
	depthStencilBufferDesc.Width = swapChainDesc.Width;
	depthStencilBufferDesc.Height = swapChainDesc.Height;
	depthStencilBufferDesc.MipLevels = 1;
	depthStencilBufferDesc.ArraySize = 1;
	depthStencilBufferDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
	depthStencilBufferDesc.SampleDesc.Count = 1;
	depthStencilBufferDesc.SampleDesc.Quality = 0;
	depthStencilBufferDesc.Usage = D3D11_USAGE_DEFAULT;
	depthStencilBufferDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;
	depthStencilBufferDesc.CPUAccessFlags = 0;
	depthStencilBufferDesc.MiscFlags = 0;
	DX::ThrowIfFailed(
		m_pDevice->CreateTexture2D(&depthStencilBufferDesc, nullptr, &depthStencilBuffer));

	D3D11_DEPTH_STENCIL_VIEW_DESC depthStencilViewDesc;
	ZeroMemory(&depthStencilViewDesc, sizeof(depthStencilViewDesc));
	depthStencilViewDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
	depthStencilViewDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
	depthStencilViewDesc.Texture2D.MipSlice = 0;

	DX::ThrowIfFailed(
		m_pDevice->CreateDepthStencilView(
			depthStencilBuffer,
			&depthStencilViewDesc,
			&m_pDepthBufferDSV));

	SAFE_RELEASE(depthStencilBuffer);
}

void D3D11Context::SetupViewport(UINT winWidth, UINT winHeight)
{
	ZeroMemory(&m_viewport, sizeof(D3D11_VIEWPORT));
	m_viewport.Width = static_cast<float>(winWidth);
	m_viewport.Height = static_cast<float>(winHeight);
	m_viewport.MinDepth = 0.0f;
	m_viewport.MaxDepth = 1.0f;
	m_viewport.TopLeftX = 0.0f;
	m_viewport.TopLeftY = 0.0f;
}

void D3D11Context::SetupDebugLayer()
{
	DX::ThrowIfFailed(m_pDevice.As(&m_pDebugLayer));
	DX::ThrowIfFailed(m_pDebugLayer.As(&m_pInfoQueue));
	m_pInfoQueue->SetBreakOnSeverity(D3D11_MESSAGE_SEVERITY::D3D11_MESSAGE_SEVERITY_CORRUPTION, true);
	m_pInfoQueue->SetBreakOnSeverity(D3D11_MESSAGE_SEVERITY::D3D11_MESSAGE_SEVERITY_ERROR, true);
	//m_pInfoQueue->SetBreakOnSeverity(D3D11_MESSAGE_SEVERITY::D3D11_MESSAGE_SEVERITY_WARNING, true);
	//m_pInfoQueue->SetBreakOnSeverity(D3D11_MESSAGE_SEVERITY::D3D11_MESSAGE_SEVERITY_INFO, true);
	//m_pInfoQueue->SetBreakOnSeverity(D3D11_MESSAGE_SEVERITY::D3D11_MESSAGE_SEVERITY_MESSAGE, true);

	D3D11_MESSAGE_ID hide[] =
	{
		D3D11_MESSAGE_ID::D3D11_MESSAGE_ID_SETPRIVATEDATA_CHANGINGPARAMS
	};
	
	D3D11_INFO_QUEUE_FILTER filter = {};
	filter.DenyList.NumIDs = _countof(hide);
	filter.DenyList.pIDList = hide;
	m_pInfoQueue->AddStorageFilterEntries(&filter);
}

bool D3D11Context::Initialize()
{
	m_pImmediateContext->RSSetViewports(1, &m_viewport);

	InitializeNvAPI();
	if (m_gfxCaps.bVariablePixelRateShadingSupported) 
	{
		SetVRS(true);
	}

	return true;
}

void D3D11Context::SetDepthMapRender(D3D11PipelineState& pipelineState)
{
	pipelineState.SetDepthMapRender(*m_pImmediateContext.Get());
}

void D3D11Context::SetBackBufferRender()
{
	m_pImmediateContext->ClearRenderTargetView(m_pBackBufferRTV.Get(), m_clearColor);
	m_pImmediateContext->ClearDepthStencilView(m_pDepthBufferDSV.Get(), D3D11_CLEAR_DEPTH, 1.0f, 0);
	m_pImmediateContext->OMSetRenderTargets(1,
		m_pBackBufferRTV.GetAddressOf(),
		m_pDepthBufferDSV.Get());
}

void D3D11Context::BindMeshBuffers(D3D11VertexBuffer& vertexBuffer, D3D11IndexBuffer& indexBuffer)
{
	vertexBuffer.Bind(*m_pImmediateContext.Get());
	indexBuffer.Bind(*m_pImmediateContext.Get());
}

void D3D11Context::BindConstantBuffers_DI(D3D11PipelineState& pipelineState)
{
	pipelineState.BindConstantBuffers_DI(*m_pImmediateContext.Get());
}

void D3D11Context::BindConstantBuffers_DM(D3D11PipelineState& pipelineState)
{
	pipelineState.BindConstantBuffers_DM(*m_pImmediateContext.Get());
}

void D3D11Context::DrawIndexed(unsigned int indexCount, unsigned int startIndexLocation, unsigned int baseVertexLocation)
{
	m_pImmediateContext->DrawIndexed(indexCount, startIndexLocation, baseVertexLocation);
}

D3D11PipelineState* D3D11Context::CreatePipelineState(PIPELINE_DESC desc)
{
	return D3D11PipelineState::Create(*m_pDevice.Get(), *m_pImmediateContext.Get(), *m_pSwapChain.Get(), desc);
}

void D3D11Context::EndFrameRender()
{
	//V-Sync enabled
	DX::ThrowIfFailed(m_pSwapChain->Present(1, 0));
}

void D3D11Context::Shutdown()
{
	if (m_enableNvAPI)
	{
		SetVRS(false);
		ShutdownNvAPI();
	}
#if defined (_DEBUG)
	m_pDebugLayer->ReportLiveDeviceObjects(D3D11_RLDO_DETAIL);
	m_pDebugLayer->Release();
	m_pInfoQueue->Release();
#endif
	m_pSwapChain->Release();
	m_pDevice->Release();
	m_pImmediateContext->Release();
}

void D3D11Context::UpdatePerConfig(D3D11PipelineState& pipelineState)
{
	pipelineState.UpdatePerConfig(*m_pImmediateContext.Get());
}

void D3D11Context::UpdatePerFrame_DI(D3D11PipelineState& pipelineState)
{
	pipelineState.UpdatePerFrame_DI(*m_pImmediateContext.Get());
}

void D3D11Context::UpdatePerFrame_DM(D3D11PipelineState& pipelineState)
{
	pipelineState.UpdatePerFrame_DM(*m_pImmediateContext.Get());
}

void D3D11Context::BindShaderResources(D3D11PipelineState& pipelineState)
{
	pipelineState.BindShaderResources(*m_pImmediateContext.Get());
}

void D3D11Context::UnbindShaderResources(D3D11PipelineState& pipelineState)
{
	pipelineState.UnbindShaderResources(*m_pImmediateContext.Get());
}

D3D11VertexBuffer* D3D11Context::CreateVertexBuffer(VERTEX_BUFFER_DESC desc)
{
	return D3D11VertexBuffer::Create(*m_pDevice.Get(), desc);
}

D3D11IndexBuffer* D3D11Context::CreateIndexBuffer(INDEX_BUFFER_DESC desc)
{
	return D3D11IndexBuffer::Create(*m_pDevice.Get(), desc);
}

D3D11ConstantBuffer* D3D11Context::CreateConstantBuffer(CONSTANT_BUFFER_DESC desc)
{
	return D3D11ConstantBuffer::Create(*m_pDevice.Get(), desc);
}

void D3D11Context::InitializeNvAPI()
{
	NvAPI_Status NvStatus = NvAPI_Initialize();
	if (NvStatus == NVAPI_OK) 
	{
		m_gfxCaps = QueryGraphicsCapabilities();
		m_enableNvAPI = true;
	}
}

void D3D11Context::ShutdownNvAPI()
{
	NvAPI_Unload();
}

NV_D3D1x_GRAPHICS_CAPS D3D11Context::QueryGraphicsCapabilities()
{
	NV_D3D1x_GRAPHICS_CAPS caps;
	memset(&caps, 0, sizeof(NV_D3D1x_GRAPHICS_CAPS));

	NvAPI_Status NvStatus = NvAPI_D3D1x_GetGraphicsCapabilities(m_pDevice.Get(), NV_D3D1x_GRAPHICS_CAPS_VER, &caps);
	if (NvStatus == NVAPI_OK)
	{
		return caps;
	}
	return caps; //print some kinda error (make macro)
}

void D3D11Context::SetVRS(bool enable)
{
	NV_D3D11_VIEWPORTS_SHADING_RATE_DESC sShadingRateDesc;
	ZeroMemory(&sShadingRateDesc, sizeof(NV_D3D11_VIEWPORTS_SHADING_RATE_DESC));
	if (enable) 
	{
		sShadingRateDesc.numViewports = 1;
		sShadingRateDesc.pViewports =
			(NV_D3D11_VIEWPORT_SHADING_RATE_DESC*)malloc(sizeof(NV_D3D11_VIEWPORT_SHADING_RATE_DESC));
		if (sShadingRateDesc.pViewports)
		{
			sShadingRateDesc.version = NV_D3D11_VIEWPORTS_SHADING_RATE_DESC_VER;
			sShadingRateDesc.pViewports[0].enableVariablePixelShadingRate = true;
			for (unsigned int i = 0; i < NV_MAX_PIXEL_SHADING_RATES; i++)
			{
				sShadingRateDesc.pViewports[0].shadingRateTable[i] = NV_PIXEL_SHADING_RATE::NV_PIXEL_X1_PER_RASTER_PIXEL;
			}
			NvAPI_Status NvStatus = NvAPI_D3D11_RSSetViewportsPixelShadingRates(m_pImmediateContext.Get(), &sShadingRateDesc);
		}
	}
	else 
	{
		sShadingRateDesc.numViewports = 0;
		NvAPI_Status NvStatus = NvAPI_D3D11_RSSetViewportsPixelShadingRates(m_pImmediateContext.Get(), &sShadingRateDesc);
	}
	m_enableVRS = enable;
}

bool D3D11Context::GetVRS()
{
	return m_enableVRS;
}
