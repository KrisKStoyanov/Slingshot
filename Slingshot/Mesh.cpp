#include "Mesh.h"

Mesh* Mesh::Create(D3D11Context& graphicsContext, MESH_DESC& mesh_desc, ShadingModel shadingModel)
{
	return new Mesh(graphicsContext, mesh_desc, shadingModel);
}

void Mesh::Shutdown()
{
	//m_pVBuffer->Release();
	//m_pIBuffer->Release();
	//m_pVSCB->Release();
	//SAFE_RELEASE(m_pVBuffer);
	//SAFE_RELEASE(m_pIBuffer);
	//SAFE_RELEASE(m_pVSCB);
}

Mesh::Mesh(D3D11Context& graphicsContext, MESH_DESC& mesh_desc, ShadingModel shadingModel) :
	m_pVBuffer(nullptr), m_pIBuffer(nullptr),
	m_vertexCount(mesh_desc.vertexCount), m_indexCount(mesh_desc.indexCount),
	m_VBufferStride(0), m_VBufferOffset(0), m_topology(mesh_desc.topology)
{
	switch (shadingModel)
	{
	case ShadingModel::GoochShading:
	{
		m_VBufferStride = sizeof(GoochShadingVertex);
		m_VBufferOffset = 0;
	}
	break;
	default:
	{
		m_VBufferStride = sizeof(GoochShadingVertex);
		m_VBufferOffset = 0;
	}
	break;
	}

	//----------------------------------

	D3D11_BUFFER_DESC vertexBufferDesc;
	ZeroMemory(&vertexBufferDesc, sizeof(vertexBufferDesc));
	vertexBufferDesc.Usage = D3D11_USAGE_DEFAULT;
	vertexBufferDesc.ByteWidth = m_VBufferStride * mesh_desc.vertexCount;
	vertexBufferDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
	vertexBufferDesc.CPUAccessFlags = 0;
	vertexBufferDesc.MiscFlags = 0;
	vertexBufferDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA vertexData;
	ZeroMemory(&vertexData, sizeof(vertexData));
	vertexData.pSysMem = mesh_desc.vertexCollection;
	vertexData.SysMemPitch = 0;
	vertexData.SysMemSlicePitch = 0;

	DX::ThrowIfFailed(graphicsContext.GetDevice()->CreateBuffer(
		&vertexBufferDesc, &vertexData, m_pVBuffer.GetAddressOf()));

	//----------------------------------

	D3D11_BUFFER_DESC indexBufferDesc;
	ZeroMemory(&indexBufferDesc, sizeof(indexBufferDesc));
	indexBufferDesc.Usage = D3D11_USAGE_DEFAULT;
	indexBufferDesc.ByteWidth = sizeof(*mesh_desc.indexCollection) * mesh_desc.indexCount;
	indexBufferDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;
	indexBufferDesc.CPUAccessFlags = 0;
	indexBufferDesc.MiscFlags = 0;
	indexBufferDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA indexData;
	ZeroMemory(&indexData, sizeof(indexData));
	indexData.pSysMem = mesh_desc.indexCollection;
	indexData.SysMemPitch = 0;
	indexData.SysMemSlicePitch = 0;

	DX::ThrowIfFailed(graphicsContext.GetDevice()->CreateBuffer(
		&indexBufferDesc, &indexData, m_pIBuffer.GetAddressOf()));

	//----------------------------------

	SAFE_DELETE_ARRAY(mesh_desc.vertexCollection);
	SAFE_DELETE_ARRAY(mesh_desc.indexCollection);
}

const Microsoft::WRL::ComPtr<ID3D11Buffer> Mesh::GetVertexBuffer()
{
	return m_pVBuffer;
}

const Microsoft::WRL::ComPtr<ID3D11Buffer> Mesh::GetIndexBuffer()
{
	return m_pIBuffer;
}

unsigned int Mesh::GetVertexCount()
{
	return m_vertexCount;
}

unsigned int Mesh::GetIndexCount()
{
	return m_indexCount;
}

unsigned int* Mesh::GetVertexBufferStride()
{
	return &m_VBufferStride;
}

unsigned int* Mesh::GetVertexBufferOffset()
{
	return &m_VBufferOffset;
}

D3D11_PRIMITIVE_TOPOLOGY Mesh::GetTopology()
{
	return m_topology;
}
