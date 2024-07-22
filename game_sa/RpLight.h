#pragma once

#include "rw/RwObject.h"
#include "rw/RwRGBA.h"
#include "rw/RwLinkList.h"
#include "rw/RwLLLink.h"
#include "rw/RwRGBAReal.h"

struct RpLight
{
  RwObjectHasFrame object;
  float radius;
  RwRGBAReal color;
  float minusCosAngle;
  RwLinkList WorldSectorsInLight;
  RwLLLink inWorld;
  uint16_t lightFrame;
  uint8_t isMainLight;
  uint8_t pad;
};