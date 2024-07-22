#pragma once

#include "RpAtomic.h"

struct CRoadsignAttrFlags
{
  uint16_t nNumLines : 2;
  uint16_t nNumLetters : 2;
  uint16_t nPaletteID : 2;
  int8_t undefined; // ??
};

union CRoadsignAttr_un
{
  uint16_t flags;
  CRoadsignAttrFlags rsFlags;
};

/* 1649 */
struct CRoadsignAttr
{
  float width;
  float height;
  float rotX;
  float rotY;
  float rotZ;
  CRoadsignAttr_un _anon_0;
  char undefined[2]; // ??
  uintptr_t *textTabPtr;
  RpAtomic *m_rsAtomic;
};
