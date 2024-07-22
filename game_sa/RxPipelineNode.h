#pragma once

#include "RxPipelineCluster.h"
#include "RxPipelineNodeTopSortData.h"

struct RxPipelineNode
{
  int *nodeDef; // RxNodeDefinition
  uint32_t numOutputs;
  uint32_t *outputs;
  RxPipelineCluster **slotClusterRefs;
  uint32_t *slotsContinue;
  void *privateData;
  uint32_t *inputToClusterSlot;
  RxPipelineNodeTopSortData *topSortData;
  void *initializationData;
  uint32_t initializationDataSize;
};
