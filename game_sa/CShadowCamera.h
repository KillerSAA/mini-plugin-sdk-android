#pragma once

#include <game_sa/rw/RwCamera.h>
#include <game_sa/rw/RwTexture.h>

struct CShadowCamera
{
  RwCamera *m_pShadowCamera;
  RwTexture *m_pShadowTexture;
};
