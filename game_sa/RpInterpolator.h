#pragma once

struct RpInterpolator
{
  int32_t flags;
  int16_t startMorphTarget;
  int16_t endMorphTarget;
  float time;
  float recipTime;
  float position;
};