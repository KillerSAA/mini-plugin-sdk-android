#pragma once

#include "eFireType.h"
#include "AssocGroupId.h"
#include "eWeaponType.h"
#include "CVector.h"

enum eWeaponSkill : int32_t
{
  WEAPONSKILL_POOR = 0x0,
  WEAPONSKILL_STD = 0x1,
  WEAPONSKILL_PRO = 0x2,
  WEAPONSKILL_SPECIAL = 0x3,
  WEAPONSKILL_MAX_NUMBER = 0x4,
};

struct CWeaponInfo
{
  eFireType m_eFireType;
  float m_fTargetRange;
  float m_fWeaponRange;
  int32_t m_modelId;
  int32_t m_modelId2;
  int32_t m_nWeaponSlot;
  struct { // tks plugin sdk :) https://github.com/DK22Pac/plugin-sdk/blob/ce73538cb2d354349cf297370a81a98ac83bff97/plugin_sa/game_sa/CWeaponInfo.h#L24
      unsigned int bCanAim : 1;
      unsigned int bAimWithArm : 1;
      unsigned int b1stPerson : 1;
      unsigned int bOnlyFreeAim : 1;
      unsigned int bMoveAim : 1; // can move when aiming
      unsigned int bMoveFire : 1; // can move when firing
      unsigned int b06 : 1; // this bitfield is not used
      unsigned int b07 : 1; // this bitfield is not used
      unsigned int bThrow : 1;
      unsigned int bHeavy : 1; // can't run fast with this weapon
      unsigned int bContinuosFire : 1;
      unsigned int bTwinPistol : 1;
      unsigned int bReload : 1; // this weapon can be reloaded
      unsigned int bCrouchFire : 1; // can reload when crouching
      unsigned int bReload2Start : 1; // reload directly after firing
      unsigned int bLongReload : 1;
      unsigned int bSlowdown : 1;
      unsigned int bRandSpeed : 1;
      unsigned int bExpands : 1;
  }              m_nFlags;
  AssocGroupId m_animGroup;
  int16_t m_nAmmo;
  int16_t m_nDamage;
  CVector m_vecFireOffset;
  eWeaponSkill m_SkillLevel;
  int32_t m_nReqStatLevel;
  float m_fAccuracy;
  float m_fMoveSpeed;
  float m_animLoopStart;
  float m_animLoopEnd;
  float m_animFireTime;
  float m_anim2LoopStart;
  float m_anim2LoopEnd;
  float m_anim2FireTime;
  float m_animBreakoutTime;
  float m_fSpeed;
  float m_fRadius;
  float m_fLifeSpan;
  float m_fSpread;
  int16_t m_nAimOffsetIndex;
  int8_t m_defaultCombo;
  int8_t m_nCombosAvailable;
  
  static char **ms_aWeaponNames; // weapon names array. Count: MAX_WEAPON_NAMES(50)
  static void LoadWeaponData();
  static CWeaponInfo *GetWeaponInfo(eWeaponType weapon, unsigned char skill);
  static eWeaponType FindWeaponType(const char* w);
  static eFireType FindWeaponFireType(const char* w);
  static void Initialise();
  static void Shutdown();
};

extern CWeaponInfo* aWeaponInfo;