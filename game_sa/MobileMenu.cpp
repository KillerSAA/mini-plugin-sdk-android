#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <GlossHook/Gloss.h>
#include <sdk/Call.h>

#include "MobileMenu.h"

MobileMenu* gMobileMenu = (MobileMenu*)(GetSym("gMobileMenu_ptr"));

MobileMenu::MobileMenu() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenuC2Ev_ptr"));
}

MobileMenu::~MobileMenu() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenuD2Ev_ptr"));
}

void MobileMenu::Initialize() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10InitializeEv_ptr"));
}

void MobileMenu::Render() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu6RenderEv_ptr"));
}

void MobileMenu::ProcessPending() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu14ProcessPendingEv_ptr"));
}

void MobileMenu::PopAllScreens() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu13PopAllScreensEv_ptr"));
}

void MobileMenu::Update() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu6UpdateEv_ptr"));
}

void MobileMenu::InitForPause() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitForPauseEv_ptr"));
}

bool MobileMenu::IsMainMenuScreen() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN10MobileMenu16IsMainMenuScreenEv_ptr"));
}

void MobileMenu::Exit() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu4ExitEv_ptr"));
}

void MobileMenu::Load() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu4LoadEv_ptr"));
}

void MobileMenu::Unload() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu6UnloadEv_ptr"));
}

void MobileMenu::InitForTitle() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitForTitleEv_ptr"));
}

void MobileMenu::InitForDownload() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu15InitForDownloadEv_ptr"));
}

void MobileMenu::InitForSignedOut() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu16InitForSignedOutEv_ptr"));
}

void MobileMenu::InitForSave() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu11InitForSaveEv_ptr"));
}

void MobileMenu::InitForRetry() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitForRetryEv_ptr"));
}

void MobileMenu::LoadFailed() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10LoadFailedEv_ptr"));
}

void MobileMenu::SaveFailed() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10SaveFailedEv_ptr"));
}

void MobileMenu::InitForNag() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10InitForNagEv_ptr"));
}

void MobileMenu::InitGameVars() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitGameVarsEv_ptr"));
}

void MobileMenu::UpdateDownload(int percent, bool done) {
    Call::FunctionFastCall<void, int, bool>(GetSym("_ZN10MobileMenu14UpdateDownloadEib_ptr"), percent, done);
}

void MobileMenu::AddScreen(MenuScreen *toAdd, bool immediate) {
    Call::FunctionFastCall<void, MenuScreen*, bool>(GetSym("_ZN10MobileMenu9AddScreenEP10MenuScreenb_ptr"), toAdd, immediate);
}

void MobileMenu::RemoveTopScreen(bool immediate, bool dontExit) {
    Call::FunctionFastCall<void, bool, bool>(GetSym("_ZN10MobileMenu15RemoveTopScreenEbb_ptr"), immediate, dontExit);
}

void MobileMenu::DrawQuad(CVector2D ul, CVector2D lr, CRGBA *color) {
    Call::FunctionFastCall<void, CVector2D, CVector2D, CRGBA*>(GetSym("_ZN10MobileMenu8DrawQuadE9CVector2DS0_P5CRGBA_ptr"), ul, lr, color);
}

void MobileMenu::DrawQuad2(CVector2D *coords, CRGBA *color) {
    Call::FunctionFastCall<void, CVector2D*, CRGBA*>(GetSym("_ZN10MobileMenu8DrawQuadEP9CVector2DP5CRGBA_ptr"), coords, color);
}

void MobileMenu::DrawSprite(RwTexture *texture, CVector2D *coords, CVector2D *uvs, CRGBA *color) {
    Call::FunctionFastCall<void, RwTexture*, CVector2D*, CVector2D*, CRGBA*>(GetSym("_ZN10MobileMenu10DrawSpriteEP9RwTextureP9CVector2DS3_P5CRGBA_ptr"), texture, coords, uvs, color);
}

void MobileMenu::DrawSprite2(RwTexture *texture, CRGBA col, CVector2D ul, CVector2D lr, CVector2D uv1, CVector2D uv2) {
    Call::FunctionFastCall<void, RwTexture*, CRGBA, CVector2D, CVector2D, CVector2D, CVector2D>(GetSym("_ZN10MobileMenu10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_S3_S3__ptr"), texture, col, ul, lr, uv1, uv2);
}

void MobileMenu::DrawSprite3(RwTexture *texture, CRGBA col, CVector2D ul, CVector2D lr) {
    Call::FunctionFastCall<void, RwTexture*, CRGBA, CVector2D, CVector2D>(GetSym("_ZN10MobileMenu10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3__ptr"), texture, col, ul, lr);
}

void MobileMenu::PrepareToRender() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu15PrepareToRenderEv_ptr"));
}

void MobileMenu::ClampBGCoords(CVector2D *toClamp) {
    Call::FunctionFastCall<void, CVector2D*>(GetSym("_ZN10MobileMenu13ClampBGCoordsER9CVector2D_ptr"), toClamp);
}

void MobileMenu::CalcBGUVSize() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12CalcBGUVSizeEv_ptr"));
}

void MobileMenu::GetRandomBGCoords(CVector2D v) {
    Call::FunctionFastCall<void, CVector2D>(GetSym("_ZN10MobileMenu17GetRandomBGCoordsEv_ptr"), v);
}
