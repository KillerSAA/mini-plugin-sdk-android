#pragma once

#include "CRGBA.h"
#include "CSprite2d.h"
#include "CRect.h"
#include "CHoldEffect.h"
#include "eHIDMapping.h"
#include "CVector.h"

struct CWidget
{
    int (**_vptr$CWidget)(void);
    HIDMapping m_HIDMapping;
    CSprite2d m_Sprite;
    struct WidgetPosition {
    float m_fOriginX;
    float m_fOriginY;
    float m_fScaleX;
    float m_fScaleY;
    };
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
    static CVector2D &m_vecTouchAnchor; // m_vecTouchAnchor[4]
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

