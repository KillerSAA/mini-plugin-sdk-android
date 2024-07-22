#pragma once 

#include <game_sa/FxSystem_c.h>
#include <game_sa/eWeaponState.h>
#include <game_sa/eWeaponType.h>

struct CWeapon
{
  eWeaponType m_eWeaponType;
  eWeaponState m_eState;
  int32_t m_nAmmoInClip;
  int32_t m_nAmmoTotal;
  uint32_t m_nTimer;
  bool m_bFirstPersonWeaponModeSelected;
  bool m_bDontPlaceInHand;
  char undefined[2]; // ??
  FxSystem_c *m_pWeaponFxSys;
};

