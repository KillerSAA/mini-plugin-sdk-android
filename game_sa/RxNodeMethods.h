#pragma once 

#include "types.h"

struct RxNodeMethods
{
  RxNodeBodyFn nodeBody;
  RxNodeInitFn nodeInit;
  RxNodeTermFn nodeTerm;
  RxPipelineNodeInitFn pipelineNodeInit;
  RxPipelineNodeTermFn pipelineNodeTerm;
  RxPipelineNodeConfigFn pipelineNodeConfig;
  RxConfigMsgHandlerFn configMsgHandler;
};
