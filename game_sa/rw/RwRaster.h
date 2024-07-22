#pragma once 

#include <game_sa/TextureDatabaseEntry.h>

struct RwRaster
{
  RwRaster *parent;
  uint8_t *cpPixels;
  uint8_t *palette;
  int width;
  int height;
  int depth;
  int stride;
  int16_t nOffsetX;
  int16_t nOffsetY;
  uint8_t cType;
  uint8_t cFlags;
  uint8_t cFormat;
  int originalWidth;
  int originalHeight;
  TextureDatabaseEntry *dbEntry;
  uint16_t privateFlags;
  int8_t m_undefined; // ??
  int8_t m_undefined1; // ??
};
