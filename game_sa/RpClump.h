#pragma once 

#include "rw/RwObject.h"
#include "rw/RwLinkList.h"
#include "rw/RwLLLink.h"
#include "types.h"

struct RpClump
{
  RwObject object;
  RwLinkList atomicList;
  RwLinkList lightList;
  RwLinkList cameraList;
  RwLLLink inWorldLink;
  RpClumpCallBack callback;
  uint16_t renderFrame;
  uint16_t pad;
};