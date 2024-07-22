#pragma once

#include "rw/RwVectors.h"
#include "rw/RwFrame.h"
#include "RpHAnimBlendInterpFrame.h"

union AnimBlendFrameData_un1
{
  RwV3d posn;
  RwV3d bonePosition;
};

union AnimBlendFrameData_un2
{
  RwFrame *pFrame;
  RpHAnimBlendInterpFrame *pStdKeyFrame;
};

struct AnimBlendFrameData
{
  int8_t Flags;
  char undefined[3]; // ??
  AnimBlendFrameData_un1 _anon_0;
  AnimBlendFrameData_un2 _anon_1;
  int32_t boneTag;
};