#pragma once

#include <game_sa/rw/RwTexture.h>
#include <game_sa/rw/RwMatrix.h>
#include <game_sa/rw/RwVectors.h>
#include <game_sa/CEntity.h>
#include <game_sa/ListItem_c.h>
#include <game_sa/CAEFireAudioEntity.h>

struct FxInfo_c
{
  int (**_vptr$FxInfo_c)(void);
  uint16_t m_type;
  bool m_timeModeParticle;
  int8_t undefined; // ??
};

struct FxInfoManager_c
{
  int32_t m_numFxInfos;
  FxInfo_c **m_fxInfoPtrs;
  int8_t m_movementOffset;
  int8_t m_renderOffset;
  char undefined[2]; // ??
};

struct FxPrimBP_c
{
  int (**_vptr$FxPrimBP_c)(void);
  int8_t m_type;
  int8_t m_srcBlendId;
  int8_t m_dstBlendId;
  bool m_alphaOn;
  int16_t *m_matVals_i16;
  RwTexture *m_texturePtr;
  RwTexture *m_texturePtr2;
  RwTexture *m_texturePtr3;
  RwTexture *m_texturePtr4;
  int32_t m_txdIndex;
  List_c m_particleList;
  FxInfoManager_c m_fxInfoMan;
};

struct FxSphere_c
{
  RwV3d m_center;
  float m_radius;
  int32_t m_lastPlaneRejected;
};

struct FxSystemBP_c : ListItem_c
{
  uint32_t m_hashName;
  float m_length;
  float m_loopIntervalMin;
  float m_loopIntervalMax;
  uint16_t m_cullDist_ui16;
  int8_t m_playMode;
  int8_t m_numFxPrimBPs;
  FxPrimBP_c **m_fxPrimBPPtrs;
  FxSphere_c *m_boundingSphere;
};

struct FxSystem_c;
struct FxPrim_c
{
  int (**_vptr$FxPrim_c)(void);
  FxPrimBP_c *m_bpPtr;
  FxSystem_c *m_fxSysPtr;
  bool m_enabled;
  char undefined[3]; // ??
};

struct FxSystem_c : ListItem_c
{
  FxSystemBP_c *m_bpPtr;
  RwMatrix *m_parentMat;
  CEntity *m_pEntity;
  RwMatrix m_offsetMat;
  int8_t m_playStatus;
  int8_t m_killStatus;
  bool m_useConstTime;
  int8_t m_undefined; // ??
  float m_currTime;
  float m_distToCam;
  uint16_t m_constTime_ui16;
  uint16_t m_rateMult_ui16;
  uint16_t m_timeMult_ui16;
  uint8_t m_allocatedParentMat : 1;
  uint8_t m_createLocal : 1;
  uint8_t m_useZTest : 1;
  uint8_t m_stopParticleCreation : 1;
  uint8_t m_prevCulled : 1;
  uint8_t m_mustCreatePrts : 1;
  int8_t m_undefined1; // ??
  float m_loopInterval;
  RwV3d m_velAdd;
  FxSphere_c *m_boundingSphere;
  FxPrim_c **m_fxPrimPtrs;
  CAEFireAudioEntity m_FireAudioEntity;
};
