#pragma once

#include "RpMaterial.h"
#include "types.h"

struct RxOpenGLMeshInstanceData
{
  uint32_t primType;
  uint32_t vertexDesc;
  uint32_t vertexStride;
  uint32_t numVertices;
  uint32_t vertexDataSize;
  u_native emuArrayRef;
  uint32_t minVertexIdx;
  u_native vertexBufferRef;
  u_native indexBufferRef;
  uint32_t indexOffset;
  uint32_t numIndices;
  uint16_t *indexData;
  RpMaterial *material;
  bool vertexAlpha;
};
