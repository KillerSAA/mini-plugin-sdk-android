#pragma once

#include <game_sa/rw/RwTexture.h>
#include <game_sa/CRGBA.h>

struct CLightAttr
{
  RwRGBA_Base m_colour;
  float m_lodDistance;
  float m_size;
  float m_coronaSize;
  float m_shadowSize;
  uint16_t m_flags;
  uint8_t m_flashiness;
  uint8_t m_reflectionType;
  uint8_t m_lensFlareType;
  uint8_t m_shadowAlpha;
  uint8_t m_shadowDepth;
  int8_t m_lightDirX;
  int8_t m_lightDirY;
  int8_t m_lightDirZ;
  char undefined[2]; // ??
  RwTexture *m_pCoronaTex;
  RwTexture *m_pShadowTex;
};
