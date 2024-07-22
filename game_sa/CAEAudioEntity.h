#pragma once

#include <game_sa/CEntity.h>
#include <game_sa/CAESound.h>

struct CEntity;

struct CAEAudioEntity
{
  int (**_vptr$CAEAudioEntity)(void);
  CEntity *m_pGameEntity;
  CAESound ScratchSound;
};

