//GoochIlluminationVS.hlsl
#include "GoochIllumination.hlsli"

cbuffer PerFrameBuffer : register(b0)
{
    float4x4 cameraViewMatrix;
    float4x4 cameraProjMatrix;
    float4x4 lightViewMatrix;
    float4x4 lightProjMatrix;
    float4 camPos;
    float4 lightPos;
};

cbuffer PerDrawCall : register(b1)
{
    float4x4 worldMatrix;
}

PS_INPUT main(VS_INPUT vs_input)
{
    PS_INPUT vs_output = (PS_INPUT)0;
 
    float4x4 wvpMatrix = mul(worldMatrix, mul(cameraViewMatrix, cameraProjMatrix));
    float4x4 wvpLightMatrix = mul(worldMatrix, mul(lightViewMatrix, lightProjMatrix));
    
    vs_output.position = mul(vs_input.position, wvpMatrix);
    vs_output.posLightWorld = mul(vs_input.position, wvpLightMatrix);
    
    vs_output.uv = vs_input.uv;
    vs_output.posWorld = mul(vs_input.position, worldMatrix);
    vs_output.normalWorld = mul(vs_input.normal, worldMatrix);
    
    return vs_output;
}