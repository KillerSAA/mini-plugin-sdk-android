#pragma once 

#include "RxClusterRef.h"
#include "eRxClusterValidityReq.h"
#include "RxOutputSpec.h"

struct RxIoSpec
{
  uint32_t numClustersOfInterest;
  RxClusterRef *clustersOfInterest;
  RxClusterValidityReq *inputRequirements;
  uint32_t numOutputs;
  RxOutputSpec *outputs;
};