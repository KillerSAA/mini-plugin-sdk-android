#pragma once

#include "RxClusterDefinition.h"
#include "eRxClusterForcePresent.h"

struct RxClusterRef
{
  RxClusterDefinition *clusterDef;
  RxClusterForcePresent forcePresent;
  uint32_t reserved;
};