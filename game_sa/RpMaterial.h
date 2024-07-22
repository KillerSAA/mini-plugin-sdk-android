#pragma once

#include <game_sa/rw/RwTexture.h>
#include <game_sa/CRGBA.h>
#include <game_sa/RxPipeline.h>
#include <game_sa/rw/RwSurfaceProperties.h>

struct RpMaterial
{
  RwTexture *texture;
  RwRGBA color;
  RxPipeline *pipeline;
  RwSurfaceProperties surfaceProps;
  int16_t refCount;
  int16_t pad;
};