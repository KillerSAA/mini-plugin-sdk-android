#pragma once

#include "CVector.h"
#include "rw/RwVectors.h"
#include "rw/RwTexture.h"
#include "rw/RwRGBA.h"

struct PPTriPlant
{
  CVector V1;
  CVector V2;
  CVector V3;
  CVector center;
  uint16_t model_id;
  uint16_t num_plants;
  RwV2d scale;
  RwTexture *texture_ptr;
  RwRGBA color;
  uint8_t intensity;
  uint8_t intensity_var;
  char undefined[2]; // ??
  float seed;
  float scale_var_xy;
  float scale_var_z;
  float wind_bend_scale;
  float wind_bend_var;
};
