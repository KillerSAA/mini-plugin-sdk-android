#pragma once

#include "RQVector.h"

struct CColourSet
{
  float m_fAmbientRed;
  float m_fAmbientGreen;
  float m_fAmbientBlue;
  float m_fAmbientRed_Obj;
  float m_fAmbientGreen_Obj;
  float m_fAmbientBlue_Obj;
  float m_fAmbientRed_BeforeBrightness;
  float m_fAmbientGreen_BeforeBrightness;
  float m_fAmbientBlue_BeforeBrightness;
  uint16_t m_nSkyTopRed;
  uint16_t m_nSkyTopGreen;
  uint16_t m_nSkyTopBlue;
  uint16_t m_nSkyBottomRed;
  uint16_t m_nSkyBottomGreen;
  uint16_t m_nSkyBottomBlue;
  uint16_t m_nSunCoreRed;
  uint16_t m_nSunCoreGreen;
  uint16_t m_nSunCoreBlue;
  uint16_t m_nSunCoronaRed;
  uint16_t m_nSunCoronaGreen;
  uint16_t m_nSunCoronaBlue;
  float m_fSunSize;
  float m_fSpriteSize;
  float m_fSpriteBrightness;
  int16_t m_nShadowStrength;
  int16_t m_nLightShadowStrength;
  int16_t m_nPoleShadowStrength;
  char undefined[2]; // ??
  float m_fFarClip;
  float m_fFogStart;
  float m_fLightsOnGroundBrightness;
  uint16_t m_nLowCloudsRed;
  uint16_t m_nLowCloudsGreen;
  uint16_t m_nLowCloudsBlue;
  uint16_t m_nFluffyCloudsBottomRed;
  uint16_t m_nFluffyCloudsBottomGreen;
  uint16_t m_nFluffyCloudsBottomBlue;
  float m_fWaterRed;
  float m_fWaterGreen;
  float m_fWaterBlue;
  float m_fWaterAlpha;
  float m_fPostFx1Red;
  float m_fPostFx1Green;
  float m_fPostFx1Blue;
  float m_fPostFx1Alpha;
  float m_fPostFx2Red;
  float m_fPostFx2Green;
  float m_fPostFx2Blue;
  float m_fPostFx2Alpha;
  float m_fCloudAlpha;
  int32_t m_nHighLightMinIntensity;
  uint16_t m_nWaterFogAlpha;
  char undefined2[2]; // ??
  float m_fDirectionalLightMultiplier;
  float m_fLODMultiplier;
  RQVector m_vRedGrade;
  RQVector m_vGreenGrade;
  RQVector m_vBlueGrade;
};