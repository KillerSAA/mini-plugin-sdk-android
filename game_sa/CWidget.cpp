#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <sdk/Call.h>

#include "CWidget.h"

double &CWidget::m_fTime = *(double*)GetSym("_ZN7CWidget7m_fTimeE");
double &CWidget::m_fElapsedTime = *(double*)GetSym("_ZN7CWidget14m_fElapsedTimeE");
bool &CWidget::bInsidePause = *(bool*)GetSym("_ZN7CWidget14m_bInsidePauseE");
CWidget* CWidget::m_pInitialTouchWidget = (CWidget*)GetSym("_ZN7CWidget21m_pInitialTouchWidgetE");
CWidget* CWidget::m_pReleasedWidget = (CWidget*)GetSym("_ZN7CWidget17m_pReleasedWidgetE");
CWidget* CWidget::m_pSwipedWidget = (CWidget*)GetSym("_ZN7CWidget15m_pSwipedWidgetE");
CWidget* CWidget::m_pPinchZoomWidget = (CWidget*)GetSym("_ZN7CWidget18m_pPinchZoomWidgetE");
CVector2D* CWidget::m_vecTouchAnchor = (CVector2D*)GetSym("_ZN7CWidget16m_vecTouchAnchorE");

CWidget::CWidget(const char* pszSprite, WidgetPosition *WidgetPos, unsigned int nFlags, HIDMapping Mapping) {
    Call::FunctionFastCall<void, const char*, WidgetPosition*, unsigned int, HIDMapping>(GetSym("j__ZN7CWidgetC2EPKcRK14WidgetPositionj10HIDMapping"), pszSprite, WidgetPos, nFlags, Mapping);
}

CWidget::~CWidget() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidgetD2Ev"));
}

void CWidget::SetTexture(CSprite2d *sprite, unsigned char *pszSprite, bool bForce) {
    Call::FunctionFastCall<void, CSprite2d*, unsigned char*, bool>(GetSym("_ZN7CWidget10SetTextureER9CSprite2dPcb"), sprite, pszSprite, bForce);
}

void CWidget::ClearTapHistory() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidget15ClearTapHistoryEv"));
}

void CWidget::Update() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidget6UpdateEv"));
}

bool CWidget::AndroidBackEnabled() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget18AndroidBackEnabledEv"));
}

bool CWidget::IsTouched(CVector2D const& pVecOut) {
    return Call::FunctionFastCall<bool, CVector2D const&>(GetSym("_ZN7CWidget9IsTouchedEP9CVector2D"), pVecOut);
}

bool CWidget::IsReleased(CVector2D const& pVecOut) {
    return Call::FunctionFastCall<bool, CVector2D const&>(GetSym("_ZN7CWidget10IsReleasedEP9CVector2D"), pVecOut);
}

bool CWidget::IsPinchZooming(CVector2D const& pVecOut) {
    return Call::FunctionFastCall<bool, CVector2D const&>(GetSym("_ZN7CWidget14IsPinchZoomingEP9CVector2D"), pVecOut);
}

bool CWidget::IsDoubleTapped() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget14IsDoubleTappedEv"));
}

bool CWidget::IsSwiped() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget8IsSwipedEv"));
}

bool CWidget::IsSwipedLeft() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget12IsSwipedLeftEv"));
}

bool CWidget::IsSwipedRight() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget13IsSwipedRightEv"));
}

bool CWidget::IsSwipedDown() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget12IsSwipedDownEv"));
}

bool CWidget::IsSwipedUp() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN7CWidget10IsSwipedUpEv"));
}

int CWidget::CoordsAreInsideWidget(CVector2D const& vecCoords, bool bUseExtraPaddingScale) {
    return Call::FunctionFastCall<int, CVector2D const&, bool>(GetSym("_ZN7CWidget21CoordsAreInsideWidgetERK9CVector2Db"), vecCoords, bUseExtraPaddingScale);
}

void CWidget::OnInitialTouch() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidget14OnInitialTouchEv"));
}

float CWidget::GetPinchDistance() {
    return Call::FunctionFastCall<float>(GetSym("_ZN7CWidget16GetPinchDistanceEv"));
}

int CWidget::GetNumTapsInTime(float fSeconds) {
    return Call::FunctionFastCall<int, float>(GetSym("_ZN7CWidget16GetNumTapsInTimeEf"), fSeconds);
}

void CWidget::DrawHelpIcon(const char* pszChars, float x, float y, float fHeight, int nAlpha) {
    Call::FunctionFastCall<void, const char*, float, float, float, int>(GetSym("_ZN7CWidget12DrawHelpIconEPKcfffi"), pszChars, x, y, fHeight, nAlpha);
}

void CWidget::DecrementFrameCount() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidget19DecrementFrameCountEv"));
}

void CWidget::SetScreenRect(CRect const& rect) {
    Call::FunctionFastCall<void, CRect>(GetSym("_ZN7CWidget13SetScreenRectERK5CRect"), rect);
}

void CWidget::ManageAlpha() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidget11ManageAlphaEv"));
}

void CWidget::CreateHoldEffect(const char* pszSprite, bool bSquare, CRGBA color, bool bExplicitRender) {
    Call::FunctionFastCall<void, const char*, bool, CRGBA, bool>(GetSym("_ZN7CWidget16CreateHoldEffectEPKcb5CRGBAb"), pszSprite, bSquare, color, bExplicitRender);
}

void CWidget::SetInitialTouchWidget(int nTouchIndex, CWidget *pInitialTouchWidget) {
    Call::FunctionFastCall<void, int, CWidget*>(GetSym("_ZN7CWidget21SetInitialTouchWidgetEiPS_"), nTouchIndex, pInitialTouchWidget);
}

void CWidget::SetReleasedWidget(int nTouchIndex, CWidget *pWidget) {
    Call::FunctionFastCall<void, int, CWidget*>(GetSym("_ZN7CWidget17SetReleasedWidgetEiPS_"), nTouchIndex, pWidget);
}

void CWidget::SetPinchZoomWidget(CWidget *pWidget) {
    Call::FunctionFastCall<void, CWidget*>(GetSym("_ZN7CWidget18SetPinchZoomWidgetEPS_"), pWidget);
}

void CWidget::SetSwipedWidget(int nTouchIndex, CWidget *pWidget) {
    Call::FunctionFastCall<void, int, CWidget*>(GetSym("_ZN7CWidget15SetSwipedWidgetEiPS_"), nTouchIndex, pWidget);
}

void CWidget::GetGradientColor(CRGBA const& color, CWidget *widget, float fLevel, float nAlpha) {
    Call::FunctionFastCall<void, CRGBA const&, CWidget*, float, float>(GetSym("_ZN7CWidget16GetGradientColorEfi"), color, widget, fLevel, nAlpha);
} 

void CWidget::UpdateTiming() {
    Call::FunctionFastCall<void>(GetSym("_ZN7CWidget12UpdateTimingEv"));
}

void CWidget::SetScissor(CRect const& rectScissor) {
    Call::FunctionFastCall<void, CRect>(GetSym("_ZN7CWidget10SetScissorER5CRect"), rectScissor);
}

void CWidget::SetTextureStatic(CSprite2d *sprite, unsigned char* pszSprite) {
    Call::FunctionFastCall<void, CSprite2d*, unsigned char*>(GetSym("_ZN7CWidget16SetTextureStaticER9CSprite2dPc"), sprite, pszSprite);
}

bool CWidget::IsInsideRect(CVector2D vecTouch, CRect RectBox) {
    return Call::FunctionFastCall<bool, CVector2D, CRect>(GetSym("_ZN7CWidget12IsInsideRectE9CVector2D5CRect"), vecTouch, RectBox);
}

bool CWidget::IsInsideCircle(CVector2D vecTouch, CRect RectBox) {
    return Call::FunctionFastCall<bool, CVector2D, CRect>(GetSym("_ZN7CWidget14IsInsideCircleE9CVector2D5CRect"), vecTouch, RectBox);
}   