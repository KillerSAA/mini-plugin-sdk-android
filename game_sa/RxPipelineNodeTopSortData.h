#pragma once 

#include "rxReq.h"

struct RxPipelineNodeTopSortData
{
  uint32_t numIns;
  uint32_t numInsVisited;
  rxReq *req;
};