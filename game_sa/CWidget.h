#pragma once

#include "CRGBA.h"
#include "CSprite2d.h"
#include "CRect.h"
#include "CHoldEffect.h"
#include "eHIDMapping.h"
#include "CVector.h"

enum WidgetIDs : int32_t
{
  WIDGET_ENTER_CAR = 0x0,
  WIDGET_ATTACK = 0x1,
  WIDGET_ACCELERATE = 0x2,
  WIDGET_BRAKE = 0x3,
  WIDGET_HANDBRAKE = 0x4,
  WIDGET_VEHICLE_STEER_LEFT = 0x5,
  WIDGET_VEHICLE_STEER_RIGHT = 0x6,
  WIDGET_HORN = 0x7,
  WIDGET_PHONE = 0x8,
  WIDGET_GIFT = 0x9,
  WIDGET_KISS = 0xA,
  WIDGET_CAR_SHOOT = 0xB,
  WIDGET_HYDRAULICS = 0xC,
  WIDGET_AUTO_HYDRAULICS = 0xD,
  WIDGET_DROP_CRANE = 0xE,
  WIDGET_DROP_ITEM = 0xF,
  WIDGET_VEHICLE_SHOOT_LEFT = 0x10,
  WIDGET_VEHICLE_SHOOT_RIGHT = 0x11,
  WIDGET_CAM_TOGGLE = 0x12,
  WIDGET_ENTER_TARGETING = 0x13,
  WIDGET_EXIT_TARGETING = 0x14,
  WIDGET_VC_SHOOT = 0x15,
  WIDGET_VC_SHOOT_ALT = 0x16,
  WIDGET_AIR_GUN = 0x17,
  WIDGET_ROCKET = 0x18,
  WIDGET_VEHICLE_BOMB = 0x19,
  WIDGET_VEHICLE_TURRET_LEFT = 0x1A,
  WIDGET_VEHICLE_TURRET_RIGHT = 0x1B,
  WIDGET_PURCHASE = 0x1C,
  WIDGET_SWAP_WEAPONS = 0x1D,
  WIDGET_NITRO = 0x1E,
  WIDGET_BUTTON_SPRINT = 0x1F,
  WIDGET_BUTTON_CROUCH = 0x20,
  WIDGET_BUTTON_DIVE = 0x21,
  WIDGET_BUTTON_SWIM = 0x22,
  WIDGET_POOL_ENGLISH = 0x23,
  WIDGET_POOL_BALL_IN_HAND = 0x24,
  WIDGET_ARCADE_BUTTON = 0x25,
  WIDGET_ARCADE_POWER_OFF = 0x26,
  WIDGET_ARCADE_RESET = 0x27,
  WIDGET_ARCADE_JOYSTICK = 0x28,
  WIDGET_SKIP_CUTSCENE = 0x29,
  WIDGET_TRAIN_NEXT_STATION = 0x2A,
  WIDGET_TAP_METER_BUTTON = 0x2B,
  WIDGET_CRANE_UP = 0x2C,
  WIDGET_CRANE_DOWN = 0x2D,
  WIDGET_HELICOPTER_MAGNET_UP = 0x2E,
  WIDGET_HELICOPTER_MAGNET_DOWN = 0x2F,
  WIDGET_GYM_EASIER = 0x30,
  WIDGET_GYM_HARDER = 0x31,
  WIDGET_ZOOM_IN = 0x32,
  WIDGET_ZOOM_OUT = 0x33,
  WIDGET_RACE_LEFT = 0x34,
  WIDGET_RACE_RIGHT = 0x35,
  WIDGET_STORE_ACCEPT = 0x36,
  WIDGET_STORE_CANCEL = 0x37,
  WIDGET_STORE_BACK = 0x38,
  WIDGET_STORE_BUY = 0x39,
  WIDGET_ROULETTE_UP = 0x3A,
  WIDGET_ROULETTE_DOWN = 0x3B,
  WIDGET_ROULETTE_LEFT = 0x3C,
  WIDGET_ROULETTE_RIGHT = 0x3D,
  WIDGET_PLACE_BET = 0x3E,
  WIDGET_REMOVE_BET = 0x3F,
  WIDGET_STEERING_SELECTION = 0x40,
  WIDGET_TOUCH_LAYOUT_SELECTION = 0x41,
  WIDGET_GRAB = 0x42,
  WIDGET_MAGNET = 0x43,
  WIDGET_STINGER = 0x44,
  WIDGET_MISSION_START = 0x45,
  WIDGET_MISSION_START_VIGILANTE = 0x46,
  WIDGET_MISSION_CANCEL = 0x47,
  WIDGET_MISSION_CANCEL_VIGILANTE = 0x48,
  WIDGET_MINIGAME_START = 0x49,
  WIDGET_MINIGAME_CANCEL = 0x4A,
  WIDGET_SCHOOL_EXIT = 0x4B,
  WIDGET_SCHOOL_LEFT = 0x4C,
  WIDGET_SCHOOL_RIGHT = 0x4D,
  WIDGET_SCHOOL_START = 0x4E,
  WIDGET_SCHOOL_CONTINUE = 0x4F,
  WIDGET_SCHOOL_TITLE_BACKGROUND = 0x50,
  WIDGET_SCHOOL_AWARD = 0x51,
  WIDGET_SCHOOL_RESULTS = 0x52,
  WIDGET_SCHOOL_FRAME_ONE = 0x53,
  WIDGET_SCHOOL_FRAME_TWO = 0x54,
  WIDGET_SCHOOL_FRAME_THREE = 0x55,
  WIDGET_SCHOOL_FRAME_FOUR = 0x56,
  WIDGET_BASKETBALL_SHOOT = 0x57,
  WIDGET_BASKETBALL_TRICK = 0x58,
  WIDGET_GAMBLING_QUIT = 0x59,
  WIDGET_GAMBLING_CONTINUE = 0x5A,
  WIDGET_BLACK_JACK_SPLIT = 0x5B,
  WIDGET_BLACK_JACK_DOUBLE = 0x5C,
  WIDGET_BLACK_JACK_HIT = 0x5D,
  WIDGET_BLACK_JACK_STAND = 0x5E,
  WIDGET_BLACK_JACK_REGION = 0x5F,
  WIDGET_MENU_SLIDER = 0x60,
  WIDGET_RHYTHM_UP = 0x61,
  WIDGET_RHYTHM_DOWN = 0x62,
  WIDGET_RHYTHM_LEFT = 0x63,
  WIDGET_RHYTHM_RIGHT = 0x64,
  WIDGET_RHYTHM_SELECT = 0x65,
  WIDGET_RHYTHM_EXIT = 0x66,
  WIDGET_PLAYER_SCORE = 0x67,
  WIDGET_OPPOSITION_SCORE = 0x68,
  WIDGET_GANG_REGION = 0x69,
  WIDGET_GANG_RECRUIT = 0x6A,
  WIDGET_GANG_IGNORE = 0x6B,
  WIDGET_GANG_FOLLOW = 0x6C,
  WIDGET_GANG_HOLD_POSITION = 0x6D,
  WIDGET_POSITIVE = 0x6E,
  WIDGET_NEGATIVE = 0x6F,
  WIDGET_COLOR_PICKER = 0x70,
  WIDGET_VEHICLE_SLIDER_LEFT_BUTTON = 0x71,
  WIDGET_VEHICLE_SLIDER_RIGHT_BUTTON = 0x72,
  WIDGET_WOF_FIRST_BET = 0x73,
  WIDGET_WOF_SECOND_BET = 0x74,
  WIDGET_WOF_THIRD_BET = 0x75,
  WIDGET_WOF_FOURTH_BET = 0x76,
  WIDGET_WOF_FIFTH_BET = 0x77,
  WIDGET_WOF_SIXTH_BET = 0x78,
  WIDGET_VIDEO_POKER_ADD_COIN = 0x79,
  WIDGET_VIDEO_POKER_REMOVE_COIN = 0x7A,
  WIDGET_VIDEO_POKER_DEAL = 0x7B,
  WIDGET_VIDEO_POKER_HOLD_FIRST_CARD = 0x7C,
  WIDGET_VIDEO_POKER_HOLD_SECOND_CARD = 0x7D,
  WIDGET_VIDEO_POKER_HOLD_THIRD_CARD = 0x7E,
  WIDGET_VIDEO_POKER_HOLD_FOURTH_CARD = 0x7F,
  WIDGET_VIDEO_POKER_HOLD_FIFTH_CARD = 0x80,
  WIDGET_VIDEO_POKER_HOLD_FIRST_CARD_REGION = 0x81,
  WIDGET_VIDEO_POKER_HOLD_SECOND_CARD_REGION = 0x82,
  WIDGET_VIDEO_POKER_HOLD_THIRD_CARD_REGION = 0x83,
  WIDGET_VIDEO_POKER_HOLD_FOURTH_CARD_REGION = 0x84,
  WIDGET_VIDEO_POKER_HOLD_FIFTH_CARD_REGION = 0x85,
  WIDGET_VIDEO_POKER_EXIT = 0x86,
  WIDGET_ITB_FIRST_HORSE = 0x87,
  WIDGET_ITB_SECOND_HORSE = 0x88,
  WIDGET_ITB_THIRD_HORSE = 0x89,
  WIDGET_ITB_FOURTH_HORSE = 0x8A,
  WIDGET_ITB_FIFTH_HORSE = 0x8B,
  WIDGET_ITB_FIRST_BET = 0x8C,
  WIDGET_ITB_SECOND_BET = 0x8D,
  WIDGET_ITB_THIRD_BET = 0x8E,
  WIDGET_ITB_FOURTH_BET = 0x8F,
  WIDGET_ITB_FIFTH_BET = 0x90,
  WIDGET_ITB_SIXTH_BET = 0x91,
  WIDGET_ITB_SEVENTH_BET = 0x92,
  WIDGET_ITB_EIGHTH_BET = 0x93,
  WIDGET_ITB_PLACE_BET = 0x94,
  WIDGET_ITB_EXIT = 0x95,
  WIDGET_MAP = 0x96,
  WIDGET_WEAPON_SLOT_CHEATS = 0x97,
  WIDGET_CAR_CHEATS = 0x98,
  WIDGET_MISSION_SKIP = 0x99,
  WIDGET_CHEATS = 0x9A,
  WIDGET_CHEAT_MENU = 0x9B,
  WIDGET_SHOP = 0x9C,
  WIDGET_RESPONSE = 0x9D,
  WIDGET_DRIVE_HYBRID = 0x9E,
  WIDGET_REPLAY = 0x9F,
  WIDGET_PLAYER_INFO = 0xA0,
  WIDGET_RADAR = 0xA1,
  WIDGET_HELP_TEXT = 0xA2,
  WIDGET_TAP_METER = 0xA3,
  WIDGET_THUMB_CIRCLE = 0xA4,
  WIDGET_MENU = 0xA5,
  WIDGET_SWIPE_RADIO = 0xA6,
  WIDGET_PED_MOVE = 0xA7,
  WIDGET_SPRINT = 0xA8,
  WIDGET_BASKETBALL_JUMP = 0xA9,
  WIDGET_SHOOT_LOOK = 0xAA,
  WIDGET_VEHICLE_LANECORRECTION = 0xAB,
  WIDGET_VEHICLE_STEER_ANALOG = 0xAC,
  WIDGET_VEHICLE_FLICK = 0xAD,
  WIDGET_CHEATS_RECT = 0xAE,
  WIDGET_LOOK = 0xAF,
  WIDGET_MISSION_TIMERS = 0xB0,
  WIDGET_RACING = 0xB1,
  WIDGET_RACE_RESULTS = 0xB2,
  WIDGET_HORSE_RESULTS = 0xB3,
  WIDGET_WAGER = 0xB4,
  WIDGET_POOL = 0xB5,
  WIDGET_POKER_PAYOUT = 0xB6,
  WIDGET_VITAL_STATS = 0xB7,
  WIDGET_ROULETTE_SPIN = 0xB8,
  WIDGET_AIRPORT_LEFT = 0xB9,
  WIDGET_AIRPORT_RIGHT = 0xBA,
  WIDGET_PARACHUTE = 0xBB,
  WIDGET_TATTOO_PREVIEW = 0xBC,
  WIDGET_SAVE_NOTIFICATION = 0xBD,
  NUM_WIDGETS = 0xBE,
};

struct CWidget
{
    int (**_vptr$CWidget)(void);
    HIDMapping m_HIDMapping;
    CSprite2d m_Sprite;
    float m_fOriginX;
    float m_fOriginY;
    float m_fScaleX;
    float m_fScaleY;
    float m_fFadeRate;
    CRect m_RectScreen;
    float m_fExtraPaddingScale;
    CRect m_RectPaddedScreen;
    float m_fTapHoldTime;
    bool m_bTaphold;
    CRGBA m_Color;
    bool m_bEnabled;
    bool m_bCachedEnabled;
    int8_t undefined; // ??
    float m_fTapHistory[10];
    int m_nTouchIndex;
    int m_nFrameCount;
    unsigned int m_nFlags;
    float m_fUserData;
    CHoldEffect *m_pHoldEffect;
    float m_fHoldEffectPeriod;

    static double &m_fTime;
    static double &m_fElapsedTime;
    static bool &bInsidePause;
    static CWidget* m_pInitialTouchWidget; // m_pInitialTouchWidget[4]
    static CWidget* m_pReleasedWidget; // m_pReleasedWidget[4]
    static CWidget* m_pSwipedWidget; // m_pSwipedWidget[4]
    static CWidget* m_pPinchZoomWidget;
    static CVector2D* m_vecTouchAnchor; // m_vecTouchAnchor[4]
    static float &SWIPE_DISTANCE; 

    CWidget(const char* pszSprite, WidgetPosition *WidgetPos, unsigned int nFlags, HIDMapping Mapping);
    ~CWidget();

    void SetTexture(CSprite2d *sprite, unsigned char *pszSprite, bool bForce);
    void ClearTapHistory();
    void Update();
    void Visualize();
    bool AndroidBackEnabled();
    //bool GetEnabled(bool bEnabled); just returns a value from the struct, it is not necessary
    bool IsTouched(CVector2D const& pVecOut);
    bool IsReleased(CVector2D const& pVecOut);
    bool IsPinchZooming(CVector2D const& pVecOut);
    bool IsDoubleTapped();
    bool IsSwiped();
    bool IsSwipedLeft();
    bool IsSwipedRight();
    bool IsSwipedDown();
    bool IsSwipedUp();
    int CoordsAreInsideWidget(CVector2D const& vecCoords, bool bUseExtraPaddingScale);
    void OnInitialTouch();
    float GetPinchDistance();
    int GetNumTapsInTime(float fSeconds); // maximum taps: 9
    void DrawHelpIcon(const char* pszChars, float x, float y, float fHeight, int nAlpha);
    void DecrementFrameCount();
    void SetScreenRect(CRect const& rect);
    void ManageAlpha();
    void CreateHoldEffect(const char* pszSprite, bool bSquare, CRGBA color, bool bExplicitRender);
    
    // void SetEnabled(bool bEnabled); it just changes a value in the struct, it is not necessary
    // float GetWidgetValue(); // just returns m_fUserData
    // void SetWidgetValue(); // just change the m_fUserData

    // empty functions //
    /* 
    void DrawTitleSafeArea(); 
    void Draw(); 
    void GetWidgetValue2(); 
    bool IsButton(); 
    int IsHeldDown(); 
    int IsRegion(); 
    void OnPinchZoomStart();
    void OnReleasedTouch(); 
    void OnSwipeTouch(); 
    void Pulsate(); 
    void SetEquippedItem(); 
    void SetSliderRange();
    void SetWidgetValue2();
    void SetWidgetValue3();
    void SetWidgetInfo();
    void SetWidgetInfo2();
    */

    // statics //
    static void SetInitialTouchWidget(int nTouchIndex, CWidget *pInitialTouchWidget);
    static void SetReleasedWidget(int nTouchIndex, CWidget *pWidget);
    static void SetPinchZoomWidget(CWidget *pWidget);
    static void SetSwipedWidget(int nTouchIndex, CWidget *pWidget);
    static void GetGradientColor(CRGBA const& color, CWidget *widget, float fLevel, float nAlpha); // static or not? 
    static void UpdateTiming();
    static void SetScissor(CRect const& rectScissor);
    static void SetTextureStatic(CSprite2d *sprite, unsigned char* pszSprite);
    static bool IsInsideRect(CVector2D vecTouch, CRect RectBox);
    static bool IsInsideCircle(CVector2D vecTouch, CRect RectBox);

    //static void GetScreenWidth(); not necessary, use RsGlobal

};

