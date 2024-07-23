#pragma once 

#include "rw/RwTexture.h"
#include "CVector.h"
#include "eOSPointerState.h"
#include "OSArray_MenuScreen.h"
#include "MenuScreen.h"
#include "CRGBA.h"

struct MobileMenu
{
  CVector2D m_vecbgUVSize;
  CVector2D m_vecbgTargetCoords;
  CVector2D m_vecbgCurCoords;
  CVector2D m_vecbgStartCoords;
  OSArray_MenuScreen screenStack;
  MenuScreen *pendingScreen;
  RwTexture *bgTex;
  RwTexture *sliderEmpty;
  RwTexture *sliderFull;
  RwTexture *sliderNub;
  RwTexture *controlsBack;
  RwTexture *controlsBack2;
  int32_t waypoint_blip;
  bool m_bWantsToRestartGame;
  bool bWantsToLoad;
  char undefined[2]; // ??
  int SelectedSlot;
  bool bCurrentGameNotResumable;
  bool bInitializedForSignOut;
  char undefined1[2]; // ??
  float NEW_MAP_SCALE;
  float MAP_OFFSET_X;
  float MAP_OFFSET_Y;
  float MAP_AREA_X;
  float MAP_AREA_Y;
  bool bDisplayingMap;
  bool bIsMapMode;
  bool bPointerMode;
  bool bIsMouse;
  CVector2D pointerCoords[4];
  OSPointerState pointerState[4]; // enum
  unsigned int pointerPress[4];

  MobileMenu(); // MobileMenu()
  ~MobileMenu(); // ~MobileMenu()

  // no-statics //
  void Initialize();
  void Render();
  void ProcessPending();
  void PopAllScreens();
  void Update();
  void InitForPause();
  void Exit();
  void Load();
  void Unload();
  void InitForTitle();
  void InitForDownload();
  void InitForSignedOut();
  void InitForSave();
  void InitForRetry();
  void LoadFailed();
  void SaveFailed();
  void InitForNag();
  void InitGameVars();

  void UpdateDownload(int percent, bool done);
  void AddScreen(MenuScreen *toadd, bool immediate);
  void RemoveTopScreen(bool immediate, bool dontExit);
  void ClampBGCoords(CVector2D *toClamp);
  void CalcBGUVSize();
  void GetRandomBGCoords(CVector2D v);
  bool IsMainMenuScreen();

  // statics //
  static void PrepareToRender();
  static void DrawQuad(CVector2D ul,CVector2D lr, CRGBA *color);
  static void DrawQuad2(CVector2D *coords, CRGBA *color);
  static void DrawSprite(RwTexture *texture, CVector2D *coords, CVector2D *uvs, CRGBA *color);
  static void DrawSprite2(RwTexture *texture, CRGBA col, CVector2D ul, CVector2D lr, CVector2D uv1, CVector2D uv2);
  static void DrawSprite3(RwTexture *texture, CRGBA col, CVector2D ul, CVector2D lr);
};

extern MobileMenu* gMobileMenu;