#pragma once 

#include <game_sa/CEntity.h>
#include <game_sa/CTickCounter.h>

struct CEntityScanner
{
  int (**_vptr$CEntityScanner)(void);
  CTickCounter m_timer;
  CEntity *m_entities[16];
  CEntity *m_pClosestEntity;
};
