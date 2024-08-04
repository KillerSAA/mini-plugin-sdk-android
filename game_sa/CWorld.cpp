#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <sdk/Call.h>

#include "CWorld.h"

// initializing static members // 
int &CWorld::ms_iProcessLineNumCrossings = *(int*)GetSym("_ZN6CWorld27ms_iProcessLineNumCrossingsE");
float &CWorld::fWeaponSpreadRate = *(float*)GetSym("_ZN6CWorld17fWeaponSpreadRateE");
CEntity *&CWorld::pIgnoreEntity = *(CEntity**)GetSym("_ZN6CWorld13pIgnoreEntityE");
bool &CWorld::bSecondShift = *(bool*)GetSym("_ZN6CWorld12bSecondShiftE");
bool &CWorld::bProcessCutsceneOnly = *(bool*)GetSym("_ZN6CWorld20bProcessCutsceneOnlyE");
bool &CWorld::bForceProcessControl = *(bool*)GetSym("_ZN6CWorld20bForceProcessControlE");
bool &CWorld::bIncludeBikers = *(bool*)GetSym("_ZN6CWorld14bIncludeBikersE");
bool &CWorld::bIncludeCarTyres = *(bool*)GetSym("_ZN6CWorld16bIncludeCarTyresE");
bool &CWorld::bIncludeDeadPeds = *(bool*)GetSym("_ZN6CWorld16bIncludeDeadPedsE");
bool &CWorld::bNoMoreCollisionTorque = *(bool*)GetSym("_ZN6CWorld22bNoMoreCollisionTorqueE");
bool &CWorld::bDoingCarCollisions = *(bool*)GetSym("_ZN6CWorld19bDoingCarCollisionsE");
char &CWorld::PlayerInFocus = *(char*)GetSym("_ZN6CWorld13PlayerInFocusE");
int &CWorld::ms_nCurrentScanCode = *(int*)GetSym("_ZN6CWorld19ms_nCurrentScanCodeE");
CPlayerInfo *CWorld::Players = (CPlayerInfo*)GetSym("_ZN6CWorld7PlayersE");
CSector *CWorld::ms_aSectors = (CSector*)GetSym("_ZN6CWorld11ms_aSectorsE");
CRepeatSector *CWorld::ms_aRepeatSectors = (CRepeatSector*)GetSym("_ZN6CWorld17ms_aRepeatSectorsE");
CPtrListSingleLink *CWorld::ms_aLodPtrLists = (CPtrListSingleLink*)GetSym("_ZN6CWorld15ms_aLodPtrListsE");
CPtrListDoubleLink &CWorld::ms_listMovingEntityPtrs = *(CPtrListDoubleLink*)GetSym("_ZN6CWorld23ms_listMovingEntityPtrsE");
CPtrListDoubleLink &CWorld::ms_listObjectsWithControlCode = *(CPtrListDoubleLink*)GetSym("_ZN6CWorld29ms_listObjectsWithControlCodeE");
CColPoint *CWorld::m_aTempColPts = (CColPoint*)GetSym("_ZN6CWorld13m_aTempColPtsE");
CVector &CWorld::SnookerTableMax = *(CVector*)GetSym("_ZN6CWorld15SnookerTableMaxE");
CVector &CWorld::SnookerTableMin = *(CVector*)GetSym("_ZN6CWorld15SnookerTableMinE");

// functions //
// .........
