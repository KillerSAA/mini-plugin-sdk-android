#ifndef RwFrustumPlane_H
#define RwFrustumPlane_H

#include <game_sa/rw/RwPlane.h>

struct RwFrustumPlane
{
  RwPlane plane;
  uint8_t closestX;
  uint8_t closestY;
  uint8_t closestZ;
  uint8_t pad;
};

#endif