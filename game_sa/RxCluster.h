#pragma once

#include "RxPipelineCluster.h"

struct RxCluster
{
  uint16_t flags;
  uint16_t stride;
  void *data;
  void *currentData;
  uint32_t numAlloced;
  uint32_t numUsed;
  RxPipelineCluster *clusterRef;
  uint32_t attributes;
};
