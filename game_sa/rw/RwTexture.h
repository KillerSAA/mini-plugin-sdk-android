#ifndef RwTexture_H
#define RwTexture_H

#include <game_sa/rw/RwRaster.h>
#include <game_sa/rw/RwTexDictionary.h>
#include <game_sa/rw/RwLLLink.h>

struct RwTexture
{
  RwRaster *raster;
  RwTexDictionary *dict;
  RwLLLink lInDictionary;
  char name[32];
  char mask[32];
  uint32_t filterAddressing;
  int refCount;
};

#endif