#pragma once

#include "rw/RwTexture.h"

struct MenuScreen
{
  int (**_vptr$MenuScreen)(void);
  RwTexture *arrowTex;
  float opacity;
  bool hasBack;
  char undefined[3]; // ??
};

