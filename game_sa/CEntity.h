#pragma once

#include <game_sa/CReference.h>
#include <game_sa/CPlaceable.h>
#include <game_sa/rw/RwObject.h>

struct CEntity_CFlags
{
  uint32_t bUsesCollision : 1;
  uint32_t bCollisionProcessed : 1;
  uint32_t bIsStatic : 1;
  uint32_t bHasContacted : 1;
  uint32_t bIsStuck : 1;
  uint32_t bIsInSafePosition : 1;
  uint32_t bWasPostponed : 1;
  uint32_t bIsVisible : 1;
  uint32_t bIsBIGBuilding : 1;
  uint32_t bRenderDamaged : 1;
  uint32_t bStreamingDontDelete : 1;
  uint32_t bRemoveFromWorld : 1;
  uint32_t bHasHitWall : 1;
  uint32_t bImBeingRendered : 1;
  uint32_t bDrawLast : 1;
  uint32_t bDistanceFade : 1;
  uint32_t bDontCastShadowsOn : 1;
  uint32_t bOffscreen : 1;
  uint32_t bIsStaticWaitingForCollision : 1;
  uint32_t bDontStream : 1;
  uint32_t bUnderwater : 1;
  uint32_t bHasPreRenderEffects : 1;
  uint32_t bIsTempBuilding : 1;
  uint32_t bDontUpdateHierarchy : 1;
  uint32_t bHasRoadsignText : 1;
  uint32_t bDisplayedSuperLowLOD : 1;
  uint32_t bIsProcObject : 1;
  uint32_t bBackfaceCulled : 1;
  uint32_t bLightObject : 1;
  uint32_t bUnimportantStream : 1;
  uint32_t bTunnel : 1;
  uint32_t bTunnelTransition : 1;
  uint32_t bdummy;
};

struct CEntityInfo
{
  uint8_t nType : 3;
  uint8_t nStatus : 5;
};

struct CLink_CEntity
{
  int *item; // CEntity
  CLink_CEntity *m_pPrev;
  CLink_CEntity *m_pNext;
};

struct CEntity : CPlaceable
{
  RwObject *m_pRwObject;
  CEntity_CFlags m_nFlags;
  uint16_t RandomSeed;
  int16_t m_nModelIndex;
  CReference *pReferences;
  CLink_CEntity *m_pLastRenderedLink;
  uint16_t m_nScanCode;
  uint8_t m_iplIndex;
  uint8_t m_areaCode;
  CEntity *m_pLod;
  uint8_t numLodChildren;
  int8_t numLodChildrenRendered;
  CEntityInfo m_info;
  int8_t m_undefined; // ??
};
