#pragma once

#include "RQIndexBuffer.h"
#include "RQVertexBuffer.h"

struct PreallocatedBuffers
{
  RQIndexBuffer *indexBuffers[16];
  RQVertexBuffer *vertexBuffers[16];
  int curVHandout;
  int curIHandout;
  int numDeallocated;
};