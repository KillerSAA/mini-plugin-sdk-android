#pragma once

#include "rw/RwObject.h"
#include "rw/RwResEntry.h"
#include "RpGeometry.h"
#include "rw/RwSphere.h"
#include "RpClump.h"
#include "rw/RwLLLink.h"
#include "RxPipeline.h"
#include "RpInterpolator.h"
#include "types.h"

struct RpAtomic
{
  RwObjectHasFrame object;
  RwResEntry *repEntry;
  RpGeometry *geometry;
  RwSphere boundingSphere;
  RwSphere worldBoundingSphere;
  RpClump *clump;
  RwLLLink inClumpLink;
  RpAtomicCallBackRender renderCallBack;
  RpInterpolator interpolator;
  uint16_t renderFrame;
  uint16_t pad;
  RwLinkList llWorldSectorsInAtomic;
  RxPipeline *pipeline;
};
