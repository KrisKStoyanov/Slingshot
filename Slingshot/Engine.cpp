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
#if defined(_DEBUG)
	AllocConsole();
#endif

	if ((m_pWindow = Window::Create(window_desc)) != nullptr) 
	{
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
		PIPELINE_DESC pipeline_desc;
		pipeline_desc.shadingModel = ShadingModel::FinalGathering;
		pipeline_desc.VS_filename = "GoochVS.cso";
		pipeline_desc.PS_filename = "GoochPS.cso";
		m_isRunning = m_pRenderer->Initialize(pipeline_desc);
		EditScene(*m_pScene);
		m_pTimer = new Timer();
	}

	return m_isRunning;
}

void Engine::EditScene(Scene& scene)
{
	const int ENTITY_COUNT = 10;
	Entity* entityCollection = new Entity[ENTITY_COUNT];

	//	MAIN CAMERA
	//------------------------------
	RECT winRect;
	GetWindowRect(m_pWindow->GetHandle(), &winRect);
	float resX = static_cast<float>(winRect.right - winRect.left);
	float resY = static_cast<float>(winRect.bottom - winRect.top);
	CAMERA_DESC entity0_camera_desc;
	entity0_camera_desc.lenseWidth = resX;
	entity0_camera_desc.lenseHeight = resY;
	entityCollection[0].SetCamera(entity0_camera_desc);
	TRANSFORM_DESC entity0_transform_desc;
	entity0_transform_desc.position = DirectX::XMFLOAT4(0.0f, 5.0f, -15.0f, 1.0f);
	entityCollection[0].SetTransform(entity0_transform_desc);
	//------------------------------

	//	LIGHTING
	//------------------------------
	LIGHT_DESC entity1_light_desc;
	entityCollection[1].SetLight(entity1_light_desc);
	TRANSFORM_DESC entity1_transform_desc;
	entity1_transform_desc.position = DirectX::XMFLOAT4(5.0f, 12.5f, 10.0f, 1.0f);
	entityCollection[1].SetTransform(entity1_transform_desc);
	//------------------------------

	//	CORNEL BOX
	//------------------------------
	//Bottom
	TRANSFORM_DESC entity2_transform_desc;
	entity2_transform_desc.position = DirectX::XMFLOAT4(0.0f, -5.0f, 10.0f, 1.0f);
	entityCollection[2].SetTransform(entity2_transform_desc);
	MATERIAL_DESC entity2_material_desc;
	entity2_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity2_material_desc.surfaceColor = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f, 1.0f);
	entity2_material_desc.roughness = 1.0f;
	CreatePlane(*(entityCollection + 2), 10.0f, 10.0f, entity2_material_desc);

	//Front
	TRANSFORM_DESC entity3_transform_desc;
	entity3_transform_desc.position = DirectX::XMFLOAT4(0.0f, 5.0f, 20.0f, 1.0f);
	entity3_transform_desc.rotation = DirectX::XMFLOAT4(-90.0f, 0.0f, 0.0f, 0.0f);
	entityCollection[3].SetTransform(entity3_transform_desc);
	MATERIAL_DESC entity3_material_desc;
	entity3_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity3_material_desc.surfaceColor = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f, 1.0f);
	entity3_material_desc.roughness = 1.0f;
	CreatePlane(*(entityCollection + 3), 10.0f, 10.0f, entity3_material_desc);

	//Left
	TRANSFORM_DESC entity4_transform_desc;
	entity4_transform_desc.position = DirectX::XMFLOAT4(-10.0f, 5.0f, 10.0f, 1.0f);
	entity4_transform_desc.rotation = DirectX::XMFLOAT4(0.0f, 0.0f, -90.0f, 0.0f);
	entityCollection[4].SetTransform(entity4_transform_desc);
	MATERIAL_DESC entity4_material_desc;
	entity4_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity4_material_desc.surfaceColor = DirectX::XMFLOAT4(1.0f, 0.0f, 0.0f, 1.0f);
	entity4_material_desc.roughness = 1.0f;
	CreatePlane(*(entityCollection + 4), 10.0f, 10.0f, entity4_material_desc);

	//Right
	TRANSFORM_DESC entity5_transform_desc;
	entity5_transform_desc.position = DirectX::XMFLOAT4(10.0f, 5.0f, 10.0f, 1.0f);
	entity5_transform_desc.rotation = DirectX::XMFLOAT4(0.0f, 0.0f, 90.0f, 0.0f);
	entityCollection[5].SetTransform(entity5_transform_desc);
	MATERIAL_DESC entity5_material_desc;
	entity5_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity5_material_desc.surfaceColor = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 1.0f);
	entity5_material_desc.roughness = 1.0f;
	CreatePlane(*(entityCollection + 5), 10.0f, 10.0f, entity5_material_desc);

	//Top
	TRANSFORM_DESC entity6_transform_desc;
	entity6_transform_desc.position = DirectX::XMFLOAT4(0.0f, 15.0f, 10.0f, 1.0f);
	entity6_transform_desc.rotation = DirectX::XMFLOAT4(-180.0f, 0.0f, 0.0f, 0.0f);
	entityCollection[6].SetTransform(entity6_transform_desc);
	MATERIAL_DESC entity6_material_desc;
	entity6_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity6_material_desc.surfaceColor = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f, 1.0f);
	entity6_material_desc.roughness = 1.0f;
	CreatePlane(*(entityCollection + 6), 10.0f, 10.0f, entity6_material_desc);
	//------------------------------

	//	DECOR
	//------------------------------
	//Yellow ball
	TRANSFORM_DESC entity7_transform_desc;
	entity7_transform_desc.position = DirectX::XMFLOAT4(0.0f, 1.0f, 13.5f, 1.0f);
	entityCollection[7].SetTransform(entity7_transform_desc);
	MATERIAL_DESC entity7_material_desc;
	entity7_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity7_material_desc.surfaceColor = DirectX::XMFLOAT4(1.0f, 1.0f, 0.0f, 1.0f);
	entity7_material_desc.roughness = 1.0f;
	CreateSphere(*(entityCollection + 7), 50, 50, 5.5f, entity7_material_desc);

	//Teal ball
	TRANSFORM_DESC entity8_transform_desc;
	entity8_transform_desc.position = DirectX::XMFLOAT4(6.5f, 0.0f, 7.5f, 1.0f);
	entityCollection[8].SetTransform(entity8_transform_desc);
	MATERIAL_DESC entity8_material_desc;
	entity8_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity8_material_desc.surfaceColor = DirectX::XMFLOAT4(0.0f, 1.0f, 1.0f, 1.0f);
	entity8_material_desc.roughness = 1.0f;
	CreateSphere(*(entityCollection + 8), 50, 50, 3.5f, entity8_material_desc);
	//------------------------------

	//Purple Cube 
	TRANSFORM_DESC entity9_transform_desc;
	entity9_transform_desc.position = DirectX::XMFLOAT4(-5.0f, -0.0f, 5.5f, 1.0f);
	entity9_transform_desc.rotation = DirectX::XMFLOAT4(0.0f, 12.5f, 0.0f, 0.0f);
	entityCollection[9].SetTransform(entity9_transform_desc);
	MATERIAL_DESC entity9_material_desc;
	entity9_material_desc.shadingModel = ShadingModel::FinalGathering;
	entity9_material_desc.surfaceColor = DirectX::XMFLOAT4(1.0f, 0.0f, 1.0f, 1.0f);
	entity9_material_desc.roughness = 1.0f;
	CreateCube(*(entityCollection + 9), 2.75f, 4.0f, 2.75f, entity9_material_desc);
	//------------------------------

	SCENE_DESC scene_desc;
	scene_desc.entityCollection = new Entity[ENTITY_COUNT];
	memcpy(scene_desc.entityCollection, entityCollection, sizeof(Entity) * ENTITY_COUNT);
	scene_desc.entityCount = ENTITY_COUNT;
	scene_desc.mainCameraId = 0;
	m_pScene = Scene::Create(0, scene_desc);

	SAFE_DELETE_ARRAY(entityCollection);
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
		m_pScene->OnUpdate();
		m_pRenderer->Draw(*m_pScene);
	}
	Shutdown();
	return static_cast<int>(msg.wParam);
}

void Engine::Shutdown()
{
	SAFE_SHUTDOWN(m_pScene);
	SAFE_SHUTDOWN(m_pRenderer);
	SAFE_SHUTDOWN(m_pWindow);
	SAFE_DELETE(m_pTimer);
}

void Engine::CreatePlane(Entity& entity, float width, float length, MATERIAL_DESC& material_desc)
{
	//Plane Object
	//------------------------------
	const int VERTEX_COUNT = 4;
	const int INDEX_COUNT = 4;

	MESH_DESC planeM_desc;

	switch (material_desc.shadingModel)
	{
	case ShadingModel::GoochShading:
	{
		GoochShadingVertex* entityV_collection = new GoochShadingVertex[VERTEX_COUNT];

		entityV_collection[0].position = DirectX::XMFLOAT4(-1.0f * width, 0.0f, -1.0f * length, 1.0f);
		entityV_collection[0].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[1].position = DirectX::XMFLOAT4(-1.0f * width, 0.0f, 1.0f * length, 1.0f);
		entityV_collection[1].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[2].position = DirectX::XMFLOAT4(1.0f * width, 0.0f, -1.0f * length, 1.0f);
		entityV_collection[2].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[3].position = DirectX::XMFLOAT4(1.0f * width, 0.0f, 1.0f * length, 1.0f);
		entityV_collection[3].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];
		entityI_collection[0] = 0;
		entityI_collection[1] = 1;
		entityI_collection[2] = 2;
		entityI_collection[3] = 3;

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new GoochShadingVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(GoochShadingVertex) * VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;
		
		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int) * INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;
		
		planeM_desc.vertex_buffer_desc = vertex_buffer_desc;
		planeM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	case ShadingModel::OrenNayarShading:
	{
		OrenNayarVertex* entityV_collection = new OrenNayarVertex[VERTEX_COUNT];

		entityV_collection[0].position = DirectX::XMFLOAT4(-1.0f * width, 0.0f, -1.0f * length, 1.0f);
		entityV_collection[0].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[1].position = DirectX::XMFLOAT4(-1.0f * width, 0.0f, 1.0f * length, 1.0f);
		entityV_collection[1].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[2].position = DirectX::XMFLOAT4(1.0f * width, 0.0f, -1.0f * length, 1.0f);
		entityV_collection[2].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[3].position = DirectX::XMFLOAT4(1.0f * width, 0.0f, 1.0f * length, 1.0f);
		entityV_collection[3].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];
		entityI_collection[0] = 0;
		entityI_collection[1] = 1;
		entityI_collection[2] = 2;
		entityI_collection[3] = 3;

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new OrenNayarVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(OrenNayarVertex) * VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int) * INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		planeM_desc.vertex_buffer_desc = vertex_buffer_desc;
		planeM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	case ShadingModel::FinalGathering:
	{
		FinalGatheringVertex* entityV_collection = new FinalGatheringVertex[VERTEX_COUNT];

		entityV_collection[0].position = DirectX::XMFLOAT4(-1.0f * width, 0.0f, -1.0f * length, 1.0f);
		entityV_collection[0].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[1].position = DirectX::XMFLOAT4(-1.0f * width, 0.0f, 1.0f * length, 1.0f);
		entityV_collection[1].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[2].position = DirectX::XMFLOAT4(1.0f * width, 0.0f, -1.0f * length, 1.0f);
		entityV_collection[2].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		entityV_collection[3].position = DirectX::XMFLOAT4(1.0f * width, 0.0f, 1.0f * length, 1.0f);
		entityV_collection[3].normal = DirectX::XMFLOAT4(0.0f, 1.0f, 0.0f, 0.0f);

		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];
		entityI_collection[0] = 0;
		entityI_collection[1] = 1;
		entityI_collection[2] = 2;
		entityI_collection[3] = 3;

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new FinalGatheringVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(FinalGatheringVertex) * VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int) * INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		planeM_desc.vertex_buffer_desc = vertex_buffer_desc;
		planeM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	}

	entity.SetModel(
		*m_pRenderer->GetGraphicsContext(), planeM_desc, material_desc);
}

void Engine::CreateCube(Entity& entity, float width, float height, float length, MATERIAL_DESC& material_desc)
{
	//Cube Object - Interpolated Normals (pending alternative implementation)
	//------------------------------
	const int VERTEX_COUNT = 8;
	const int INDEX_COUNT = 14;

	MESH_DESC cubeM_desc;

	switch (material_desc.shadingModel)
	{
	case ShadingModel::GoochShading:
	{
		GoochShadingVertex* entityV_collection = new GoochShadingVertex[VERTEX_COUNT];
		entityV_collection[0].position = DirectX::XMFLOAT4(-1.0f * width, -1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[0].normal = DirectX::XMFLOAT4(-1.0f, -1.0f, -1.0f, 0.0f);

		entityV_collection[1].position = DirectX::XMFLOAT4(-1.0f * width, 1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[1].normal = DirectX::XMFLOAT4(-1.0f, 1.0f, -1.0f, 0.0f);

		entityV_collection[2].position = DirectX::XMFLOAT4(1.0f * width, -1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[2].normal = DirectX::XMFLOAT4(1.0f, -1.0f, -1.0f, 0.0f);

		entityV_collection[3].position = DirectX::XMFLOAT4(1.0f * width, 1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[3].normal = DirectX::XMFLOAT4(1.0f, 1.0f, -1.0f, 0.0f);

		entityV_collection[4].position = DirectX::XMFLOAT4(-1.0f * width, -1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[4].normal = DirectX::XMFLOAT4(-1.0f, -1.0f, 1.0f, 0.0f);

		entityV_collection[5].position = DirectX::XMFLOAT4(-1.0f * width, 1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[5].normal = DirectX::XMFLOAT4(-1.0f, 1.0f, 1.0f, 0.0f);

		entityV_collection[6].position = DirectX::XMFLOAT4(1.0f * width, -1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[6].normal = DirectX::XMFLOAT4(1.0f, -1.0f, 1.0f, 0.0f);

		entityV_collection[7].position = DirectX::XMFLOAT4(1.0f * width, 1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[7].normal = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f, 0.0f);

		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];

		//Front
		entityI_collection[0] = 0;
		entityI_collection[1] = 1;
		entityI_collection[2] = 2;
		entityI_collection[3] = 3;

		entityI_collection[4] = 7;
		entityI_collection[5] = 1;

		entityI_collection[6] = 5;
		entityI_collection[7] = 0;

		entityI_collection[8] = 4;
		entityI_collection[9] = 2;

		entityI_collection[10] = 6;
		entityI_collection[11] = 7;

		entityI_collection[12] = 4;
		entityI_collection[13] = 5;

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new GoochShadingVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(GoochShadingVertex) * VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int) * INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		cubeM_desc.vertex_buffer_desc = vertex_buffer_desc;
		cubeM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	case ShadingModel::OrenNayarShading:
	{
		OrenNayarVertex* entityV_collection = new OrenNayarVertex[VERTEX_COUNT];
		entityV_collection[0].position = DirectX::XMFLOAT4(-1.0f * width, -1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[0].normal = DirectX::XMFLOAT4(-1.0f, -1.0f, -1.0f, 0.0f);

		entityV_collection[1].position = DirectX::XMFLOAT4(-1.0f * width, 1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[1].normal = DirectX::XMFLOAT4(-1.0f, 1.0f, -1.0f, 0.0f);

		entityV_collection[2].position = DirectX::XMFLOAT4(1.0f * width, -1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[2].normal = DirectX::XMFLOAT4(1.0f, -1.0f, -1.0f, 0.0f);

		entityV_collection[3].position = DirectX::XMFLOAT4(1.0f * width, 1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[3].normal = DirectX::XMFLOAT4(1.0f, 1.0f, -1.0f, 0.0f);

		entityV_collection[4].position = DirectX::XMFLOAT4(-1.0f * width, -1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[4].normal = DirectX::XMFLOAT4(-1.0f, -1.0f, 1.0f, 0.0f);

		entityV_collection[5].position = DirectX::XMFLOAT4(-1.0f * width, 1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[5].normal = DirectX::XMFLOAT4(-1.0f, 1.0f, 1.0f, 0.0f);

		entityV_collection[6].position = DirectX::XMFLOAT4(1.0f * width, -1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[6].normal = DirectX::XMFLOAT4(1.0f, -1.0f, 1.0f, 0.0f);

		entityV_collection[7].position = DirectX::XMFLOAT4(1.0f * width, 1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[7].normal = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f, 0.0f);

		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];

		//Front
		entityI_collection[0] = 0;
		entityI_collection[1] = 1;
		entityI_collection[2] = 2;
		entityI_collection[3] = 3;

		entityI_collection[4] = 7;
		entityI_collection[5] = 1;

		entityI_collection[6] = 5;
		entityI_collection[7] = 0;

		entityI_collection[8] = 4;
		entityI_collection[9] = 2;

		entityI_collection[10] = 6;
		entityI_collection[11] = 7;

		entityI_collection[12] = 4;
		entityI_collection[13] = 5;

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new OrenNayarVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(OrenNayarVertex)* VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int)* INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		cubeM_desc.vertex_buffer_desc = vertex_buffer_desc;
		cubeM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	case ShadingModel::FinalGathering:
	{
		FinalGatheringVertex* entityV_collection = new FinalGatheringVertex[VERTEX_COUNT];
		entityV_collection[0].position = DirectX::XMFLOAT4(-1.0f * width, -1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[0].normal = DirectX::XMFLOAT4(-1.0f, -1.0f, -1.0f, 0.0f);

		entityV_collection[1].position = DirectX::XMFLOAT4(-1.0f * width, 1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[1].normal = DirectX::XMFLOAT4(-1.0f, 1.0f, -1.0f, 0.0f);

		entityV_collection[2].position = DirectX::XMFLOAT4(1.0f * width, -1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[2].normal = DirectX::XMFLOAT4(1.0f, -1.0f, -1.0f, 0.0f);

		entityV_collection[3].position = DirectX::XMFLOAT4(1.0f * width, 1.0f * height, -1.0f * length, 1.0f);
		entityV_collection[3].normal = DirectX::XMFLOAT4(1.0f, 1.0f, -1.0f, 0.0f);

		entityV_collection[4].position = DirectX::XMFLOAT4(-1.0f * width, -1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[4].normal = DirectX::XMFLOAT4(-1.0f, -1.0f, 1.0f, 0.0f);

		entityV_collection[5].position = DirectX::XMFLOAT4(-1.0f * width, 1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[5].normal = DirectX::XMFLOAT4(-1.0f, 1.0f, 1.0f, 0.0f);

		entityV_collection[6].position = DirectX::XMFLOAT4(1.0f * width, -1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[6].normal = DirectX::XMFLOAT4(1.0f, -1.0f, 1.0f, 0.0f);

		entityV_collection[7].position = DirectX::XMFLOAT4(1.0f * width, 1.0f * height, 1.0f * length, 1.0f);
		entityV_collection[7].normal = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f, 0.0f);

		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];

		//Front
		entityI_collection[0] = 0;
		entityI_collection[1] = 1;
		entityI_collection[2] = 2;
		entityI_collection[3] = 3;

		entityI_collection[4] = 7;
		entityI_collection[5] = 1;

		entityI_collection[6] = 5;
		entityI_collection[7] = 0;

		entityI_collection[8] = 4;
		entityI_collection[9] = 2;

		entityI_collection[10] = 6;
		entityI_collection[11] = 7;

		entityI_collection[12] = 4;
		entityI_collection[13] = 5;

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new FinalGatheringVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(FinalGatheringVertex)* VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int)* INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		cubeM_desc.vertex_buffer_desc = vertex_buffer_desc;
		cubeM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	}

	entity.SetModel(
		*m_pRenderer->GetGraphicsContext(), cubeM_desc, material_desc);
}

void Engine::CreateSphere(Entity& entity, unsigned int slices, unsigned int stacks, float radius, MATERIAL_DESC& material_desc)
{
	const int VERTEX_COUNT = (stacks + 1) * (slices + 1);
	const int INDEX_COUNT = (slices * stacks + slices) * 6;

	MESH_DESC sphereM_desc;

	switch (material_desc.shadingModel)
	{
	case ShadingModel::GoochShading:
	{
		GoochShadingVertex* entityV_collection = new GoochShadingVertex[VERTEX_COUNT];
		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];

		float slicesF = static_cast<float>(slices);
		float stacksF = static_cast<float>(stacks);

		for (unsigned int i = 0; i < stacks + 1; ++i)
		{
			float V = i / stacksF;
			float phi = V * 3.14f;

			for (unsigned int j = 0; j < slices + 1; ++j) {

				float U = j / slicesF;
				float theta = U * 6.28f;

				float sinPhi = sinf(phi);

				float x = cosf(theta) * sinPhi;
				float y = cosf(phi);
				float z = sinf(theta) * sinPhi;

				int index = j + i * (slices + 1);
				entityV_collection[index].position = DirectX::XMFLOAT4(x * radius, y * radius, z * radius, 1.0f);
				entityV_collection[index].normal = DirectX::XMFLOAT4(x, y, z, 0.0f);

				//vert.uv = glm::vec2((glm::asin(vert.normal.x) / piVal + 0.5f), (glm::asin(vert.normal.y) / piVal + 0.5f));
			}
		}

		int index = 0;
		for (unsigned int i = 0; i < slices * stacks + slices; ++i)
		{
			entityI_collection[index] = i;
			entityI_collection[index + 1] = i + slices + 1;
			entityI_collection[index + 2] = i + slices;
			entityI_collection[index + 3] = i + slices + 1;
			entityI_collection[index + 4] = i;
			entityI_collection[index + 5] = i + 1;

			index += 6;
		}

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new GoochShadingVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(GoochShadingVertex) * VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int) * INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		sphereM_desc.vertex_buffer_desc = vertex_buffer_desc;
		sphereM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	case ShadingModel::OrenNayarShading:
	{
		OrenNayarVertex* entityV_collection = new OrenNayarVertex[VERTEX_COUNT];
		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];

		float slicesF = static_cast<float>(slices);
		float stacksF = static_cast<float>(stacks);

		for (unsigned int i = 0; i < stacks + 1; ++i)
		{
			float V = i / stacksF;
			float phi = V * 3.14f;

			for (unsigned int j = 0; j < slices + 1; ++j) {

				float U = j / slicesF;
				float theta = U * 6.28f;

				float sinPhi = sinf(phi);

				float x = cosf(theta) * sinPhi;
				float y = cosf(phi);
				float z = sinf(theta) * sinPhi;

				int index = j + i * (slices + 1);
				entityV_collection[index].position = DirectX::XMFLOAT4(x * radius, y * radius, z * radius, 1.0f);
				entityV_collection[index].normal = DirectX::XMFLOAT4(x, y, z, 0.0f);

				//vert.uv = glm::vec2((glm::asin(vert.normal.x) / piVal + 0.5f), (glm::asin(vert.normal.y) / piVal + 0.5f));
			}
		}

		int index = 0;
		for (unsigned int i = 0; i < slices * stacks + slices; ++i)
		{
			entityI_collection[index] = i;
			entityI_collection[index + 1] = i + slices + 1;
			entityI_collection[index + 2] = i + slices;
			entityI_collection[index + 3] = i + slices + 1;
			entityI_collection[index + 4] = i;
			entityI_collection[index + 5] = i + 1;

			index += 6;
		}

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new OrenNayarVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(OrenNayarVertex)* VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int)* INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		sphereM_desc.vertex_buffer_desc = vertex_buffer_desc;
		sphereM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	case ShadingModel::FinalGathering:
	{
		OrenNayarVertex* entityV_collection = new OrenNayarVertex[VERTEX_COUNT];
		unsigned int* entityI_collection = new unsigned int[INDEX_COUNT];

		float slicesF = static_cast<float>(slices);
		float stacksF = static_cast<float>(stacks);

		for (unsigned int i = 0; i < stacks + 1; ++i)
		{
			float V = i / stacksF;
			float phi = V * 3.14f;

			for (unsigned int j = 0; j < slices + 1; ++j) {

				float U = j / slicesF;
				float theta = U * 6.28f;

				float sinPhi = sinf(phi);

				float x = cosf(theta) * sinPhi;
				float y = cosf(phi);
				float z = sinf(theta) * sinPhi;

				int index = j + i * (slices + 1);
				entityV_collection[index].position = DirectX::XMFLOAT4(x * radius, y * radius, z * radius, 1.0f);
				entityV_collection[index].normal = DirectX::XMFLOAT4(x, y, z, 0.0f);

				//vert.uv = glm::vec2((glm::asin(vert.normal.x) / piVal + 0.5f), (glm::asin(vert.normal.y) / piVal + 0.5f));
			}
		}

		int index = 0;
		for (unsigned int i = 0; i < slices * stacks + slices; ++i)
		{
			entityI_collection[index] = i;
			entityI_collection[index + 1] = i + slices + 1;
			entityI_collection[index + 2] = i + slices;
			entityI_collection[index + 3] = i + slices + 1;
			entityI_collection[index + 4] = i;
			entityI_collection[index + 5] = i + 1;

			index += 6;
		}

		VERTEX_BUFFER_DESC vertex_buffer_desc;
		vertex_buffer_desc.vertexCollection = new OrenNayarVertex[VERTEX_COUNT];
		memcpy(vertex_buffer_desc.vertexCollection, entityV_collection, sizeof(OrenNayarVertex) * VERTEX_COUNT);
		vertex_buffer_desc.vertexCount = VERTEX_COUNT;
		vertex_buffer_desc.topology = Topology::TRIANGLESTRIP;

		INDEX_BUFFER_DESC index_buffer_desc;
		index_buffer_desc.indexCollection = new unsigned int[INDEX_COUNT];
		memcpy(index_buffer_desc.indexCollection, entityI_collection, sizeof(unsigned int) * INDEX_COUNT);
		index_buffer_desc.indexCount = INDEX_COUNT;

		sphereM_desc.vertex_buffer_desc = vertex_buffer_desc;
		sphereM_desc.index_buffer_desc = index_buffer_desc;

		SAFE_DELETE_ARRAY(entityV_collection);
		SAFE_DELETE_ARRAY(entityI_collection);
	}
	break;
	}	

	entity.SetModel(
		*m_pRenderer->GetGraphicsContext(), sphereM_desc, material_desc);
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
		//SetRect(&rcClip, ptMin.x, ptMin.y, ptMax.x, ptMax.y);
		//ClipCursor(&rcClip);
		ShowCursor(false);
		int xOffset = (ptMax.x - ptMin.x);
		int yOffset = (ptMax.y - ptMin.y);
		int xCoord = ptMax.x - xOffset / 2;
		int yCoord = ptMax.y - yOffset / 2;
		SetCursorPos(xCoord, yCoord);
		m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->SetMouseCoord(xCoord, yCoord);
		m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->SetRotateStatus(true);
	}
	break;
	case WM_LBUTTONUP:
	{
		ReleaseCapture();
		ShowCursor(true);
		m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->SetRotateStatus(false);
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	break;
	case WM_MOUSEMOVE:
	{
		if (m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetRotateStatus()) {
			int xCoord = GET_X_LPARAM(lParam);
			int yCoord = GET_Y_LPARAM(lParam);
			POINT pt = { xCoord, yCoord };
			ClientToScreen(hWnd, &pt);
			int lastMouseX, lastMouseY;
			m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetMouseCoord(lastMouseX, lastMouseY);
			m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->SetMouseCoord(pt.x, pt.y);
			float offsetX = static_cast<float>(pt.x) - lastMouseX;
			float offsetY = static_cast<float>(pt.y) - lastMouseY;
			float pitch = offsetX * m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetRotationSpeed();
			float head = offsetY * m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetRotationSpeed();
			m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->RotateEulerAngles(head, pitch, 0.0f);
		}
	}
	break;
	case WM_KEYDOWN:
	{
		short repeatCode = *((short*)&lParam + 1);
		using namespace DirectX;
		switch (wParam) {
		case 0x57: //W 
		{
			if (repeatCode == 16401)
			{
				m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->Translate(
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetTranslationSpeed() *
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->GetForwardDir() *
					m_pTimer->m_smoothstepF);
			}
		}
		break;
		case 0x41: //A
		{
			if (repeatCode == 16414)
			{
				m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->Translate(
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetTranslationSpeed() * -1.0f *
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->GetRightDir() *
					m_pTimer->m_smoothstepF);
			}
		}
		break;
		case 0x53: //S
		{
			if (repeatCode == 16415) 
			{
				m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->Translate(
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetTranslationSpeed() * -1.0f *
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->GetForwardDir() *
					m_pTimer->m_smoothstepF);
			}
		}
		break;
		case 0x44: //D
		{
			if (repeatCode == 16416) 
			{
				m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->Translate(
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->GetTranslationSpeed() *
					m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetTransform()->GetRightDir() *
					m_pTimer->m_smoothstepF);
			}
		}
		break;
		case VK_ESCAPE:
		{
			DestroyWindow(hWnd);
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
		m_pScene->GetCamera(m_pScene->GetMainCameraID())->GetCamera()->SetRotateStatus(false);
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
	break;
	case WM_QUIT:
	case WM_DESTROY:
	{
#if defined(_DEBUG)
		FreeConsole();
#endif
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