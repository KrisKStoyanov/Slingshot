#pragma once
#include "D3D11Context.h" //included twice (again in Mesh.h)
#include "Vertex.h"

struct SHADER_DESC 
{
	char* VS_bytecode;
	size_t VS_size;

	char* PS_bytecode;
	size_t PS_size;
};

class GraphicsProps {
public:
	static GraphicsProps* Create(D3D11Context& graphicsContext, SHADER_DESC& shader_desc, VertexType vertexType);
	void Shutdown();

	ID3D11VertexShader* GetVertexShader();
	ID3D11PixelShader* GetPixelShader();
	ID3D11InputLayout* GetInputLayout();

	VertexType GetVertexType();
private:
	GraphicsProps(D3D11Context& graphicsContext, SHADER_DESC& shader_desc, VertexType vertexType);

	ID3D11VertexShader* m_pVS;
	ID3D11PixelShader* m_pPS;
	ID3D11InputLayout* m_pIL;

	VertexType m_vertexType;
};
