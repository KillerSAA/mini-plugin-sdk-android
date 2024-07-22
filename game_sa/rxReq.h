#pragma once

#include "rw/RwReqEntry.h"
#include "RxPipelineNode.h"

struct rxReq
{
  uint32_t numused;
  uint32_t numalloced;
  uint32_t unavailslots;
  RwReqEntry *reqentries;
  RxPipelineNode *node;
};