#pragma once
#include "Vertex.h"
#include "Macros.h"
#include "Helpers.h"

struct VERTEX_BUFFER_DESC
{
	Vertex* vertexCollection;
	unsigned int vertexCount;
	Topology topology;
	unsigned int stride;
	unsigned int offset;
};

struct INDEX_BUFFER_DESC
{
	unsigned int* indexCollection;
	unsigned int indexCount;
};

struct CONSTANT_BUFFER_DESC
{
	void* cbufferData;
	unsigned int cbufferSize;
	ShaderType shaderType;
};

class Buffer
{
public:
	virtual unsigned int GetElementCount() = 0;
	virtual void Destroy() = 0;
private:

};

