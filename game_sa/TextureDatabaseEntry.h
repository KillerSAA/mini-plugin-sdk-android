#pragma once

#include <game_sa/rw/RwTexture.h>
struct RwTexture;

union TextureDatabaseEntry_Texture
{
  RwTexture *instance;
  uint8_t *matchingName; // wtf?
};

struct TextureDatabaseEntry
{
  uintptr_t *name;
  uint32_t nameHash;
  uint16_t format : 4;
  uint16_t alphaFormat : 4;
  uint16_t streamMode : 4;
  uint16_t status : 4;
  uint16_t flags;
  uint8_t category;
  uint8_t detailTexture;
  uint8_t detailTiling;
  uint16_t width;
  uint16_t height;
  TextureDatabaseEntry_Texture _anon_0;
};
