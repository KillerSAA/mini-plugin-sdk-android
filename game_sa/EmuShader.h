#pragma once

#include "RQShader.h"

struct EmuShader
{
  RQShader *shader;
  bool ownsShader;
  char undefined[3]; // ??
  unsigned int programFlags;
  unsigned int pCodeHash;
  unsigned int vCodeHash;
  EmuShader *nextShader;
};
