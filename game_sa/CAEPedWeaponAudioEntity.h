#pragma once 

#include <game_sa/CAEWeaponAudioEntity.h>

struct CAEPedWeaponAudioEntity : CAEWeaponAudioEntity
{
  bool m_bInitialised;
  char undefined[3]; // ??
  int *m_pParentPed; // CPed
};
