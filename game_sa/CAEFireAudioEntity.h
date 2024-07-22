#pragma once

#include <game_sa/CAEAudioEntity.h>
#include <game_sa/CAESound.h>

struct CAEFireAudioEntity : CAEAudioEntity
{
  CAESound *m_pFireSound;
  CAESound *m_pFireSound2;
  int *m_pParentEffectSystem; // FxSystem_c
};
