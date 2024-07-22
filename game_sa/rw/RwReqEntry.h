#pragma once

#include <game_sa/RxClusterDefinition.h>
#include <game_sa/eRxClusterValidityReq.h>
#include "RwScopeTrace.h"

struct rxReq;
struct RxPipelineNode;

struct RwReqEntry
{
  RxClusterDefinition *clusterDef;
  RxClusterValidityReq required;
  uint32_t inputs;
  RwScopeTrace *st;
  RwReqEntry *next;
  rxReq *req;
  uint32_t outbf;
  uint32_t assignedslot;
  RxPipelineNode *originatingNode;
};