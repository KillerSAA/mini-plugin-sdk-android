#pragma once

#include <game_sa/RwStructs.h>
#include <game_sa/CPhysical.h>
#include "CShadowCamera.h"
#include "RwSphere.h"
#include "RpLight.h"

struct CRealTimeShadow
{
  CPhysical *m_pPhysical;
  bool m_usedThisFrame;
  int8_t m_fadeVal;
  char undefined[2]; // ??
  CShadowCamera *m_ShadowCamera;
  bool m_bAAResample;
  char undefined1[3]; // ??
  unsigned int m_nNumBlurPass;
  bool m_bGradientDistDisappear;
  char undefined2[3]; // ??
  uint32_t m_rpObjectType;
  RpLight *m_pDirectionalLight;
  RwSphere m_ClumpBoundingSphere;
  RwSphere m_ClumpWorldBoundingSphere;
};
