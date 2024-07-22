#pragma once

#include "rw/RwSphere.h"
#include "rw/RwVectors.h"

struct RpMorphTarget
{
  int *parentGeom; // RpGeometry
  RwSphere boundingSphere;
  RwV3d *verts;
  RwV3d *normals;
};
