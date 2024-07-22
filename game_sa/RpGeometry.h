#pragma once 

#include <game_sa/rw/RwObject.h>
#include <game_sa/CRGBA.h>
#include "RpMaterialList.h"
#include "RpTriangle.h"
#include "rw/RwTexCoords.h"
#include "RpMeshHeader.h"
#include "rw/RwResEntry.h"
#include "RpMorphTarget.h"

struct RpGeometry
{
  RwObject object;
  uint32_t flags;
  uint16_t lockedSinceLastInst;
  int16_t refCount;
  int32_t numTriangles;
  int32_t numVertices;
  int32_t numMorphTargets;
  int32_t numTexCoordSets;
  RpMaterialList matList;
  RpTriangle *triangles;
  RwRGBA *preLitLum;
  RwTexCoords *texCoords[8];
  uint32_t vertexBuffer;
  RpMeshHeader *mesh;
  RwResEntry *repEntry;
  RpMorphTarget *morphTarget;
};
