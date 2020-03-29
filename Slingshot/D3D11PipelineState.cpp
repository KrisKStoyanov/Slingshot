#include "D3D11PipelineState.h"

D3D11PipelineState* D3D11PipelineState::Create(ID3D11Device& device, const PIPELINE_DESC& pipeline_desc)
{
	return new D3D11PipelineState(device, pipeline_desc);
}

D3D11PipelineState::D3D11PipelineState(ID3D11Device& device, const PIPELINE_DESC& pipeline_desc) :
	m_pVS(nullptr), m_pPS(nullptr), m_pIL(nullptr), m_shadingModel(pipeline_desc.shadingModel)
{
	char* ColorVS_bytecode = nullptr, * ColorPS_bytecode = nullptr;
	size_t ColorVS_size, ColorPS_size;
	ColorVS_bytecode = GetFileBytecode(pipeline_desc.VS_filename, ColorVS_size);
	ColorPS_bytecode = GetFileBytecode(pipeline_desc.PS_filename, ColorPS_size);

	device.CreateVertexShader(ColorVS_bytecode, ColorVS_size, nullptr, &m_pVS);
	device.CreatePixelShader(ColorPS_bytecode, ColorPS_size, nullptr, &m_pPS);

	switch (m_shadingModel)
	{
	case ShadingModel::GoochShading:
	{
		D3D11_INPUT_ELEMENT_DESC VS_inputLayout[3];

		VS_inputLayout[0].SemanticName = "POSITION";
		VS_inputLayout[0].SemanticIndex = 0;
		VS_inputLayout[0].Format = DXGI_FORMAT::DXGI_FORMAT_R32G32B32A32_FLOAT;
		VS_inputLayout[0].InputSlot = 0;
		VS_inputLayout[0].AlignedByteOffset = 0;
		VS_inputLayout[0].InputSlotClass = D3D11_INPUT_CLASSIFICATION::D3D11_INPUT_PER_VERTEX_DATA;
		VS_inputLayout[0].InstanceDataStepRate = 0;

		VS_inputLayout[1].SemanticName = "NORMAL";
		VS_inputLayout[1].SemanticIndex = 0;
		VS_inputLayout[1].Format = DXGI_FORMAT::DXGI_FORMAT_R32G32B32A32_FLOAT;
		VS_inputLayout[1].InputSlot = 0;
		VS_inputLayout[1].AlignedByteOffset = D3D11_APPEND_ALIGNED_ELEMENT;
		VS_inputLayout[1].InputSlotClass = D3D11_INPUT_CLASSIFICATION::D3D11_INPUT_PER_VERTEX_DATA;
		VS_inputLayout[1].InstanceDataStepRate = 0;

		device.CreateInputLayout(VS_inputLayout, 2, ColorVS_bytecode, ColorVS_size, &m_pIL);
	}
	break;
	case ShadingModel::OrenNayarShading:
	{
		D3D11_INPUT_ELEMENT_DESC VS_inputLayout[3];

		VS_inputLayout[0].SemanticName = "POSITION";
		VS_inputLayout[0].SemanticIndex = 0;
		VS_inputLayout[0].Format = DXGI_FORMAT::DXGI_FORMAT_R32G32B32A32_FLOAT;
		VS_inputLayout[0].InputSlot = 0;
		VS_inputLayout[0].AlignedByteOffset = 0;
		VS_inputLayout[0].InputSlotClass = D3D11_INPUT_CLASSIFICATION::D3D11_INPUT_PER_VERTEX_DATA;
		VS_inputLayout[0].InstanceDataStepRate = 0;

		VS_inputLayout[1].SemanticName = "NORMAL";
		VS_inputLayout[1].SemanticIndex = 0;
		VS_inputLayout[1].Format = DXGI_FORMAT::DXGI_FORMAT_R32G32B32A32_FLOAT;
		VS_inputLayout[1].InputSlot = 0;
		VS_inputLayout[1].AlignedByteOffset = D3D11_APPEND_ALIGNED_ELEMENT;
		VS_inputLayout[1].InputSlotClass = D3D11_INPUT_CLASSIFICATION::D3D11_INPUT_PER_VERTEX_DATA;
		VS_inputLayout[1].InstanceDataStepRate = 0;

		device.CreateInputLayout(VS_inputLayout, 2, ColorVS_bytecode, ColorVS_size, &m_pIL);
	}
	break;
	}

	D3D11_BUFFER_DESC vs_cb_desc;
	ZeroMemory(&vs_cb_desc, sizeof(vs_cb_desc));
	vs_cb_desc.Usage = D3D11_USAGE_DEFAULT;
	vs_cb_desc.ByteWidth = 256; // sizeof(VS_CONSTANT_BUFFER) = 128 <- constant buffer size must be a multiple of 16 bytes;
	vs_cb_desc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	vs_cb_desc.CPUAccessFlags = 0;
	vs_cb_desc.MiscFlags = 0;
	vs_cb_desc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA vs_cb_data;
	vs_cb_data.pSysMem = &m_wvpData;
	vs_cb_data.SysMemPitch = 0;
	vs_cb_data.SysMemSlicePitch = 0;

	DX::ThrowIfFailed(device.CreateBuffer(
		&vs_cb_desc, &vs_cb_data, &m_pVS_WVP_CBuffer));

	//WVPData* data0 = new WVPData();

	//CONSTANT_BUFFER_DESC desc0;
	//desc0.cbufferData = data0;
	//desc0.cbufferSize = sizeof(data0);
	//desc0.shaderType = ShaderType::VERTEX_SHADER;
	//m_pVS_WVP_CBuffer = D3D11ConstantBuffer::Create(device, desc0);

	//delete data0;

	D3D11_BUFFER_DESC ps_cb_desc;
	ZeroMemory(&ps_cb_desc, sizeof(ps_cb_desc));
	ps_cb_desc.Usage = D3D11_USAGE_DEFAULT;
	ps_cb_desc.ByteWidth = 80; // sizeof(VS_CONSTANT_BUFFER) = 128 <- constant buffer size must be a multiple of 16 bytes;
	ps_cb_desc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	ps_cb_desc.CPUAccessFlags = 0;
	ps_cb_desc.MiscFlags = 0;
	ps_cb_desc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA ps_cb_data;
	ps_cb_data.pSysMem = &m_worldTransformData;
	ps_cb_data.SysMemPitch = 0;
	ps_cb_data.SysMemSlicePitch = 0;

	DX::ThrowIfFailed(device.CreateBuffer(
		&ps_cb_desc, &ps_cb_data, &m_pPS_WorldTransform_CBuffer));

	//WorldTransformData* data1 = new WorldTransformData();

	//CONSTANT_BUFFER_DESC desc1;
	//desc1.cbufferData = data1;
	//desc1.cbufferSize = sizeof(data1);
	//desc1.shaderType = ShaderType::PIXEL_SHADER;
	//m_pPS_WorldTransform_CBuffer = D3D11ConstantBuffer::Create(device, desc1);

	//delete data1;

	D3D11_BUFFER_DESC ps_cb_desc0;
	ZeroMemory(&ps_cb_desc0, sizeof(ps_cb_desc0));
	ps_cb_desc0.Usage = D3D11_USAGE_DEFAULT;
	ps_cb_desc0.ByteWidth = 80; // sizeof(VS_CONSTANT_BUFFER) = 128 <- constant buffer size must be a multiple of 16 bytes;
	ps_cb_desc0.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	ps_cb_desc0.CPUAccessFlags = 0;
	ps_cb_desc0.MiscFlags = 0;
	ps_cb_desc0.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA ps_cb_data0;
	ps_cb_data0.pSysMem = &m_lightData;
	ps_cb_data0.SysMemPitch = 0;
	ps_cb_data0.SysMemSlicePitch = 0;

	DX::ThrowIfFailed(device.CreateBuffer(
		&ps_cb_desc0, &ps_cb_data0, &m_pPS_Light_CBuffer));

	//LightData* data2 = new LightData();

	//CONSTANT_BUFFER_DESC desc2;
	//desc2.cbufferData = data2;
	//desc2.cbufferSize = sizeof(data2);
	//desc2.shaderType = ShaderType::PIXEL_SHADER;
	//m_pPS_Light_CBuffer = D3D11ConstantBuffer::Create(device, desc2);

	//delete data2;

	D3D11_BUFFER_DESC ps_cb_desc1;
	ZeroMemory(&ps_cb_desc1, sizeof(ps_cb_desc1));
	ps_cb_desc1.Usage = D3D11_USAGE_DEFAULT;
	ps_cb_desc1.ByteWidth = 80; // sizeof(VS_CONSTANT_BUFFER) = 128 <- constant buffer size must be a multiple of 16 bytes;
	ps_cb_desc1.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	ps_cb_desc1.CPUAccessFlags = 0;
	ps_cb_desc1.MiscFlags = 0;
	ps_cb_desc1.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA ps_cb_data1;
	ps_cb_data1.pSysMem = &m_materialData;
	ps_cb_data1.SysMemPitch = 0;
	ps_cb_data1.SysMemSlicePitch = 0;

	DX::ThrowIfFailed(device.CreateBuffer(
		&ps_cb_desc1, &ps_cb_data1, &m_pPS_Material_CBuffer));

	//MaterialData* data3 = new MaterialData();

	//CONSTANT_BUFFER_DESC desc3;
	//desc3.cbufferData = data3;
	//desc3.cbufferSize = sizeof(data3);
	//desc3.shaderType = ShaderType::PIXEL_SHADER;
	//m_pPS_Material_CBuffer = D3D11ConstantBuffer::Create(device, desc3);

	//delete data3;

	SAFE_DELETE_ARRAY(ColorVS_bytecode);
	SAFE_DELETE_ARRAY(ColorPS_bytecode);
}

void D3D11PipelineState::Shutdown()
{
	SAFE_RELEASE(m_pVS);
	SAFE_RELEASE(m_pPS);
	SAFE_RELEASE(m_pIL);
}

void D3D11PipelineState::UpdateVSPerFrame(DirectX::XMMATRIX viewMatrix, DirectX::XMMATRIX projMatrix)
{
	m_wvpData.viewMatrix = viewMatrix;
	m_wvpData.projMatrix = projMatrix;
}

void D3D11PipelineState::UpdatePSPerFrame(DirectX::XMVECTOR cameraPos, DirectX::XMVECTOR lightPos, DirectX::XMFLOAT4 lightColor)
{
	m_worldTransformData.camPos = cameraPos;
	m_worldTransformData.lightPos = lightPos;
	m_lightData.lightColor = lightColor;
}

void D3D11PipelineState::UpdateVSPerEntity(DirectX::XMMATRIX worldMatrix)
{
	m_wvpData.worldMatrix = worldMatrix;
}

void D3D11PipelineState::UpdatePSPerEntity(DirectX::XMFLOAT4 surfaceColor, float roughness)
{
	m_materialData.surfaceColor = surfaceColor, roughness;
}

void D3D11PipelineState::Bind(ID3D11DeviceContext& deviceContext)
{
	deviceContext.IASetInputLayout(m_pIL);
	deviceContext.VSSetShader(m_pVS, nullptr, 0);
	deviceContext.PSSetShader(m_pPS, nullptr, 0);
}

void D3D11PipelineState::BindConstantBuffers(ID3D11DeviceContext& deviceContext)
{
	//m_pVS_WVP_CBuffer->Update(m_wvpData);
	//m_pVS_WVP_CBuffer->Bind(deviceContext);
	//m_pPS_WorldTransform_CBuffer->Update(m_worldTransformData);
	//m_pPS_WorldTransform_CBuffer->Bind(deviceContext);
	//m_pPS_Light_CBuffer->Update(m_lightData);
	//m_pPS_Light_CBuffer->Bind(deviceContext);
	//m_pPS_Material_CBuffer->Update(m_materialData);
	//m_pPS_Material_CBuffer->Bind(deviceContext);

	deviceContext.UpdateSubresource(m_pVS_WVP_CBuffer, 0, nullptr, &m_wvpData, 0, 0);
	deviceContext.VSSetConstantBuffers(0, 1, &m_pVS_WVP_CBuffer);
	deviceContext.UpdateSubresource(m_pPS_WorldTransform_CBuffer, 0, nullptr, &m_worldTransformData, 0, 0);
	deviceContext.PSSetConstantBuffers(0, 1, &m_pPS_WorldTransform_CBuffer);
	deviceContext.UpdateSubresource(m_pPS_Light_CBuffer, 0, nullptr, &m_lightData, 0, 0);
	deviceContext.PSSetConstantBuffers(1, 1, &m_pPS_Light_CBuffer);
	deviceContext.UpdateSubresource(m_pPS_Material_CBuffer, 0, nullptr, &m_materialData, 0, 0);
	deviceContext.PSSetConstantBuffers(2, 1, &m_pPS_Material_CBuffer);
}

ShadingModel D3D11PipelineState::GetShadingModel()
{
	return m_shadingModel;
}