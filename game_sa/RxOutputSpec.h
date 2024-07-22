#pragma once 

#include "eRxClusterValid.h"

struct RxOutputSpec
{
  char *name;
  RxClusterValid *outputClusters;
  RxClusterValid allOtherClusters;
};
