#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <GlossHook/Gloss.h>
#include <sdk/Call.h>

#include "MobileMenu.h"

MobileMenu* gMobileMenu = (MobileMenu*)(GetSym("gMobileMenu"));

MobileMenu::MobileMenu() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenuC2Ev"));
}

MobileMenu::~MobileMenu() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenuD2Ev"));
}

void MobileMenu::Initialize() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10InitializeEv"));
}

void MobileMenu::Render() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu6RenderEv"));
}

void MobileMenu::ProcessPending() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu14ProcessPendingEv"));
}

void MobileMenu::PopAllScreens() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu13PopAllScreensEv"));
}

void MobileMenu::Update() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu6UpdateEv"));
}

void MobileMenu::InitForPause() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitForPauseEv"));
}

bool MobileMenu::IsMainMenuScreen() {
    return Call::FunctionFastCall<bool>(GetSym("_ZN10MobileMenu16IsMainMenuScreenEv"));
}

void MobileMenu::Exit() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu4ExitEv"));
}

void MobileMenu::Load() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu4LoadEv"));
}

void MobileMenu::Unload() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu6UnloadEv"));
}

void MobileMenu::InitForTitle() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitForTitleEv"));
}

void MobileMenu::InitForDownload() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu15InitForDownloadEv"));
}

void MobileMenu::InitForSignedOut() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu16InitForSignedOutEv"));
}

void MobileMenu::InitForSave() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu11InitForSaveEv"));
}

void MobileMenu::InitForRetry() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitForRetryEv"));
}

void MobileMenu::LoadFailed() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10LoadFailedEv"));
}

void MobileMenu::SaveFailed() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10SaveFailedEv"));
}

void MobileMenu::InitForNag() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu10InitForNagEv"));
}

void MobileMenu::InitGameVars() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12InitGameVarsEv"));
}

void MobileMenu::UpdateDownload(int percent, bool done) {
    Call::FunctionFastCall<void, int, bool>(GetSym("_ZN10MobileMenu14UpdateDownloadEib"), percent, done);
}

void MobileMenu::AddScreen(MenuScreen *toAdd, bool immediate) {
    Call::FunctionFastCall<void, MenuScreen*, bool>(GetSym("_ZN10MobileMenu9AddScreenEP10MenuScreenb"), toAdd, immediate);
}

void MobileMenu::RemoveTopScreen(bool immediate, bool dontExit) {
    Call::FunctionFastCall<void, bool, bool>(GetSym("_ZN10MobileMenu15RemoveTopScreenEbb"), immediate, dontExit);
}

void MobileMenu::DrawQuad(CVector2D ul, CVector2D lr, CRGBA *color) {
    Call::FunctionFastCall<void, CVector2D, CVector2D, CRGBA*>(GetSym("_ZN10MobileMenu8DrawQuadE9CVector2DS0_P5CRGBA"), ul, lr, color);
}

void MobileMenu::DrawQuad2(CVector2D *coords, CRGBA *color) {
    Call::FunctionFastCall<void, CVector2D*, CRGBA*>(GetSym("_ZN10MobileMenu8DrawQuadEP9CVector2DP5CRGBA"), coords, color);
}

void MobileMenu::DrawSprite(RwTexture *texture, CVector2D *coords, CVector2D *uvs, CRGBA *color) {
    Call::FunctionFastCall<void, RwTexture*, CVector2D*, CVector2D*, CRGBA*>(GetSym("_ZN10MobileMenu10DrawSpriteEP9RwTextureP9CVector2DS3_P5CRGBA"), texture, coords, uvs, color);
}

void MobileMenu::DrawSprite2(RwTexture *texture, CRGBA col, CVector2D ul, CVector2D lr, CVector2D uv1, CVector2D uv2) {
    Call::FunctionFastCall<void, RwTexture*, CRGBA, CVector2D, CVector2D, CVector2D, CVector2D>(GetSym("_ZN10MobileMenu10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_S3_S3_"), texture, col, ul, lr, uv1, uv2);
}

void MobileMenu::DrawSprite3(RwTexture *texture, CRGBA col, CVector2D ul, CVector2D lr) {
    Call::FunctionFastCall<void, RwTexture*, CRGBA, CVector2D, CVector2D>(GetSym("_ZN10MobileMenu10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_"), texture, col, ul, lr);
}

void MobileMenu::PrepareToRender() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu15PrepareToRenderEv"));
}

void MobileMenu::ClampBGCoords(CVector2D *toClamp) {
    Call::FunctionFastCall<void, CVector2D*>(GetSym("_ZN10MobileMenu13ClampBGCoordsER9CVector2D"), toClamp);
}

void MobileMenu::CalcBGUVSize() {
    Call::FunctionFastCall<void>(GetSym("_ZN10MobileMenu12CalcBGUVSizeEv"));
}

void MobileMenu::GetRandomBGCoords(CVector2D v) {
    Call::FunctionFastCall<void, CVector2D>(GetSym("_ZN10MobileMenu17GetRandomBGCoordsEv"), v);
}
