#pragma once 

#include "RxPipelineCluster.h"
#include "RxNode.h"
#include "eRxEmbeddedPacketState.h"
#include "RxPacket.h"
#include "RxPipelineRequiresCluster.h"

struct RxPipeline
{
  bool locked;
  uint32_t numNodes;
  RxPipelineNode *nodes;
  uint32_t packetNumClusterSlots;
  rxEmbeddedPacketState embeddedPacketState;
  RxPacket *embeddedPacket;
  uint32_t numInputRequirements;
  RxPipelineRequiresCluster *inputRequirements;
  void *superBlock;
  uint32_t superBlockSize;
  uint32_t entryPoint;
  uint32_t pluginId;
  uint32_t pluginData;
};

typedef RxPipeline RxLockedPipe; // it's just that?