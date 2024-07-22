#pragma once 

#include <game_sa/RxClusterDefinition.h>

struct RxPipelineCluster
{
  RxClusterDefinition *clusterRef;
  uint32_t creationAttributes;
};
