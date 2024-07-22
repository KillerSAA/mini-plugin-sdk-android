#pragma once

#include "RxPipelineCluster.h"
#include "RxCluster.h"

struct RxPipeline;

struct RxPacket
{
  uint16_t flags;
  uint16_t numClusters;
  RxPipeline *pipeline;
  uint32_t *inputToClusterSlot;
  uint32_t *slotsContinue;
  RxPipelineCluster **slotClusterRefs;
  RxCluster clusters[1];
};
