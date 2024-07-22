#pragma once 

#include "PreallocatedBuffers.h"
#include "RQVertexBuffer.h"
#include "RQIndexBuffer.h"
#include "ArrayState.h"

struct SharedGPUResource
{
  int referenceCount;
  PreallocatedBuffers *bufferSource;
  RQVertexBuffer *vertexGPU;
  RQIndexBuffer *indexGPU;
  ArrayState *firstArray;
};