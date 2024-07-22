#pragma once

#include "RxClusterDefinition.h"
#include "eRxClusterValidityReq.h"

struct RxPipelineRequiresCluster
{
  RxClusterDefinition *clusterDef;
  RxClusterValidityReq rqdOrOpt; // enum
  uint32_t slotIndex;
};
