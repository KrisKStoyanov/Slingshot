#pragma once
#include "Helpers.h"
#include "Macros.h"
#include "FileParsing.h"
#include "Vertex.h"

struct PIPELINE_DESC
{
	ShadingModel shadingModel;
	const char* VS_filename;
	const char* PS_filename;
};

class PipelineState 
{
public:
	virtual ShadingModel GetShadingModel()
	{
		return m_shadingModel;
	}
	virtual void SetShadingModel(ShadingModel shadingModel)
	{
		m_shadingModel = shadingModel;
	}
private:

	ShadingModel m_shadingModel;
};