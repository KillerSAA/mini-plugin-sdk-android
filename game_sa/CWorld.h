#pragma once

#include "CPlayerInfo.h"
#include "CSector.h"
#include "CRepeatSector.h"
#include "CPtrList.h"

struct CWorld
{
  static int &ms_iProcessLineNumCrossings;
  static float &fWeaponSpreadRate;
  // entity to ignore
  static CEntity *&pIgnoreEntity;
  static bool &bSecondShift;
  static bool &bProcessCutsceneOnly;
  static bool &bForceProcessControl;
  static bool &bIncludeBikers;
  static bool &bIncludeCarTyres;
  static bool &bIncludeDeadPeds;
  static bool &bNoMoreCollisionTorque;
  static bool &bDoingCarCollisions;
  static char &PlayerInFocus; // Current player
  static int  &ms_nCurrentScanCode;
  // Player data array for 2 players
  static CPlayerInfo *Players; // static CPlayerInfo Players[MAX_PLAYERS]
  // Use GetSector() to access this array
  static CSector *ms_aSectors; // static CSector ms_aSectors[MAX_SECTORS] default 120x120
  // Use GetRepeatSector() to access this array
  static CRepeatSector *ms_aRepeatSectors; // static CRepeatSector ms_aRepeatSectors[MAX_REPEAT_SECTORS] default 16x16
  // Use GetLodPtrList() to access this array
  static CPtrListSingleLink *ms_aLodPtrLists; // static CPtrListSingleLink ms_aLodPtrLists[MAX_LOD_PTR_LISTS] default 30x30
  static CPtrListDoubleLink &ms_listMovingEntityPtrs;
  static CPtrListDoubleLink &ms_listObjectsWithControlCode;
  static CColPoint *m_aTempColPts; // static CColPoint m_aTempColPts[32]
  static CVector &SnookerTableMax; // default { 497.7925, -1670.3999, 13.19 }
  static CVector &SnookerTableMin; // default { 2495.8525, -1671.4099, 12.9 }

};
