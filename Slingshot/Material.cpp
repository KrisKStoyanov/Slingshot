#include "Material.h"

Material::Material(MATERIAL_DESC mat_desc)
{
	m_shadingModel = mat_desc.shadingModel;

	m_surfaceColor = mat_desc.surfaceColor;
	m_roughness = mat_desc.roughness;
}

