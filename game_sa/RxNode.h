#pragma once

#include "RxPipelineCluster.h"
#include "rxReq.h"
#include "RxPipelineNodeTopSortData.h"
#include "RxNodeMethods.h"
#include "RxIoSpec.h" 
#include "eRxNodeDefEditable.h"
#include "types.h"

struct RxNodeDefinition
{
  char *name;
  RxNodeMethods nodeMethods;
  RxIoSpec io;
  uint32_t pipelineNodePrivateDataSize;
  RxNodeDefEditable editable;
  int32_t InputPipesCnt;
};
