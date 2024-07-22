#pragma once

#include "SharedGPUResource.h"
#include "RQVertexBufferDescription.h"
#include "RQVertexState.h"
#include "types.h"

struct ArrayState
{
  void *indexPtr;
  GLenum indexType;
  GLuint indexCount;
  GLuint indexSize;
  void *vertexPtr;
  GLuint vertexBuffSize;
  GLuint vertexCount;
  GLuint vertexStride;
  GLboolean isCopy;
  char undefined[3]; // ??
  SharedGPUResource *GPUresource;
  ArrayState *nextGPUArray;
  uint32_t indexGPUOffset;
  RQVertexBufferDescription desc;
  RQVertexState *state;
};