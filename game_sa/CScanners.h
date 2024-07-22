#pragma once

#include <game_sa/CEntityScanner.h>
#include <game_sa/CTaskTimer.h>
#include <game_sa/CEntity.h>
#include <game_sa/C2dEffect.h>

struct CVehicleScanner : CEntityScanner
{
};

struct CPedScanner : CEntityScanner
{
};

struct CVehiclePotentialCollisionScanner
{
  CTaskTimer m_timer;
};

struct CCollisionEventScanner
{
  bool m_bAlreadyHitByCar;
};

struct CObjectPotentialCollisionScanner
{
  CTaskTimer m_timer;
};

struct CAttractorScanner
{
  bool m_bActivated;
  char undefined[3]; // ??
  CTaskTimer m_timer;
  C2dEffect *m_pPreviousEffect;
  CEntity *m_pPreviousEntity;
  CEntity *m_entities[10];
  C2dEffect *m_effects[10];
  float m_minDistanceSquared[10];
};