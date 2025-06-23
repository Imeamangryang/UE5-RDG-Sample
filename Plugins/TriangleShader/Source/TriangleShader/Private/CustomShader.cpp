#include "CustomShader.h"
#include "Shader.h"
#include "VertexFactory.h"

// Define our Vertex Shader and Pixel Shader Starting point
IMPLEMENT_SHADER_TYPE(, FTriangleVS, TEXT("/CustomShaders/Triangle.usf"), TEXT("TriangleVS"), SF_Vertex);
IMPLEMENT_SHADER_TYPE(, FTrianglePS, TEXT("/CustomShaders/Triangle.usf"), TEXT("TrianglePS"), SF_Pixel);

TGlobalResource<FTriangleVertexBuffer> GTriangleVertexBuffer;
TGlobalResource<FTriangleIndexBuffer> GTriangleIndexBuffer;
TGlobalResource<FTriangleVertexDeclaration> GTriangleVertexDeclaration;