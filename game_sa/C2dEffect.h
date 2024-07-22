#pragma once

#include <game_sa/CVector.h>
#include <game_sa/CLightAttr.h>
#include <game_sa/CParticleAttr.h>
#include <game_sa/CPedQueueAttr.h>
#include <game_sa/CInteriorAttr.h>
#include <game_sa/CEntryExitAttr.h>
#include <game_sa/CRoadsignAttr.h>
#include <game_sa/CTriggerPointAttr.h>
#include <game_sa/CCoverPointAttr.h>
#include <game_sa/CEscalatorAttr.h>

union C2dEffect_un
{
  CLightAttr l;
  CParticleAttr p;
  CPedQueueAttr q;
  CInteriorAttr i;
  CEntryExitAttr e;
  CRoadsignAttr rs;
  CTriggerPointAttr t;
  CCoverPointAttr c;
  CEscalatorAttr es;
};

struct C2dEffect
{
  CVector m_posn;
  uint8_t m_type;
  char undefined[3]; // ??
  C2dEffect_un attr;
};
