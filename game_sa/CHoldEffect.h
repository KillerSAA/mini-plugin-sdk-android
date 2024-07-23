#pragma once

#include "CRGBA.h" 
#include "CRect.h"
#include "CSprite2d.h"
#include "rw/RwOpenGLVertex.h" // RwIm2DVertex

struct CHoldEffect
{
  CHoldEffect *m_pPrev;
  CHoldEffect *m_pNext;
  CSprite2d m_Sprite;
  CRect m_RectScreen;
  float m_fProgress;
  bool m_bSquare;
  CRGBA m_Color;
  bool m_bExplicitRender;
  char undefined[2]; // ??
  RwIm2DVertex maVertices[48];
};
