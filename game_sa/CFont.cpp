#include <mod/amlmod.h>
#include <string>
#include <game_sa/sdk.h> 
#include <sdk/Call.h>

#include "CRGBA.h"
#include "CFont.h"
#include "CRect.h"
#include "RsGlobal.h"

CFontDetails* FontDetails = (CFontDetails*)(GetSym("_ZN5CFont7DetailsE"));

void CFont::Initialise() {
    Call::FunctionFastCall<void>(GetSym("_ZN5CFont10InitialiseEv"));
}

void CFont::Shutdown() {
    Call::FunctionFastCall<void>(GetSym("_ZN5CFont8ShutdownEv"));
}

void CFont::PrintChar(float x, float y, char character) {
    Call::FunctionFastCall<void, float, float, char>(GetSym("_ZN5CFont9PrintCharEfft"), x, y, character);
}

char *CFont::GetNextSpace(char *string) {
    return Call::FunctionFastCall<char*, char*>(GetSym("_ZN5CFont12GetNextSpaceEPt"), string);
}

char *CFont::ParseToken(char *text, CRGBA & color, bool isBlip, char *tag) {
    return Call::FunctionFastCall<char*, char*, CRGBA&, bool, char*>(GetSym("_ZN5CFont10ParseTokenEPtR5CRGBAhPc"), text, color, isBlip, tag);
}

void CFont::SetScale(float w, float h) {
    Call::FunctionFastCall<void, float, float>(GetSym("_ZN5CFont8SetScaleEf"), w, h);
}

void CFont::SetSlantRefPoint(float x, float y) {
    Call::FunctionFastCall<void, float, float>(GetSym("_ZN5CFont16SetSlantRefPointEff"), x, y);
}

void CFont::SetSlant(float value) {
    Call::FunctionFastCall<void, float>(GetSym("_ZN5CFont8SetSlantEf"), value);
}

void CFont::SetColor(CRGBA color) {
    Call::FunctionFastCall<void, CRGBA>(GetSym("_ZN5CFont8SetColorE5CRGBA"), color);
}

void CFont::SetFontStyle(signed char style) {
    Call::FunctionFastCall<void, signed char>(GetSym("_ZN5CFont12SetFontStyleEh"), style);
}

void CFont::SetWrapx(float value) {
    Call::FunctionFastCall<void, float>(GetSym("_ZN5CFont8SetWrapxEf"), value);
}

void CFont::SetCentreSize(float value) {
    Call::FunctionFastCall<void, float>(GetSym("_ZN5CFont13SetCentreSizeEf"), value);
}

void CFont::SetRightJustifyWrap(float value) {
    Call::FunctionFastCall<void, float>(GetSym("_ZN5CFont19SetRightJustifyWrapEf"), value);
}

void CFont::SetAlphaFade(float alpha) {
    Call::FunctionFastCall<void, float>(GetSym("_ZN5CFont12SetAlphaFadeEf"), alpha);
}

void CFont::SetDropColor(CRGBA color) {
    Call::FunctionFastCall<void, CRGBA>(GetSym("_ZN5CFont12SetDropColorE5CRGBA"), color);
}

void CFont::SetDropShadowPosition(signed char value) {
    Call::FunctionFastCall<void, signed char>(GetSym("j__ZN5CFont21SetDropShadowPositionEa"), value);
}

void CFont::SetEdge(signed char value) {
    Call::FunctionFastCall<void, signed char>(GetSym("_ZN5CFont7SetEdgeEa"), value);
}

void CFont::SetProportional(bool on) {
    Call::FunctionFastCall<void, bool>(GetSym("_ZN5CFont15SetProportionalEh"), on);
}

void CFont::SetBackground(bool enable, bool includeWrap) {
    Call::FunctionFastCall<void, bool, bool>(GetSym("_ZN5CFont13SetBackgroundEhh"), enable, includeWrap);
}

void CFont::SetBackgroundColor(CRGBA color) {
    Call::FunctionFastCall<void, CRGBA>(GetSym("_ZN5CFont18SetBackgroundColorE5CRGBA"), color);
}

void CFont::SetJustify(bool on) {
    Call::FunctionFastCall<void, bool>(GetSym("_ZN5CFont10SetJustifyEh"), on);
}

void CFont::SetOrientation(eFontAlignment alignment) {
    Call::FunctionFastCall<void, eFontAlignment>(GetSym("_ZN5CFont14SetOrientationEh"), alignment);
}

void CFont::InitPerFrame() {
    Call::FunctionFastCall<void>(GetSym("_ZN5CFont12InitPerFrameEv"));
}

void CFont::RenderFontBuffer() {
    Call::FunctionFastCall<void>(GetSym("_ZN5CFont16RenderFontBufferEv"));
}

float CFont::GetStringWidth(unsigned short* string, bool spaces, bool scriptValues) {
    return Call::FunctionFastCall<float, unsigned short*, bool, bool>(GetSym("_ZN5CFont14GetStringWidthEPthh"), string, spaces, scriptValues);
}

/*void CFont::DrawFonts() { 
    Call::FunctionFastCall<void>(GetSym(""));
}*/

short CFont::ProcessCurrentString(bool print, float x, float y, unsigned short* text) {
    return Call::FunctionFastCall<short, bool, float, float, unsigned short*>(GetSym("_ZN5CFont20ProcessCurrentStringEhffPt"), print, x, y, text);
}

short CFont::GetNumberLines(float x, float y, unsigned short* text) {
    return Call::FunctionFastCall<short, float, float, unsigned short*>(GetSym("_ZN5CFont14GetNumberLinesEffPt"), x, y, text);
}

short CFont::ProcessStringToDisplay(float x, float y, unsigned short* text) {
    return Call::FunctionFastCall<short, float, float, unsigned short*>(GetSym("_ZN5CFont22ProcessStringToDisplayEffPt"), x, y, text);
}

void CFont::GetTextRect(CRect *rect, float x, float y, unsigned short* text) {
    Call::FunctionFastCall<void, CRect*, float, float, unsigned short*>(GetSym("_ZN5CFont11GetTextRectEP5CRectffPt"), rect, x, y, text);
}

void CFont::PrintString(float x, float y, unsigned short* text) {
    Call::FunctionFastCall<void, float, float, unsigned short*>(GetSym("_ZN5CFont11PrintStringEffPt"), x, y, text);
}

void CFont::PrintStringFromBottom(float x, float y, unsigned short* text) {
    Call::FunctionFastCall<void, float, float, unsigned short*>(GetSym("_ZN5CFont21PrintStringFromBottomEffPt"), x, y, text);
}

void AsciiToGxtChar(const char* text, unsigned short* gxt) {
    Call::FunctionFastCall<void, const char*, unsigned short*>(GetSym("_Z14AsciiToGxtCharPKcPt"), text, gxt);
}

void FixAspectRatio(float* x, float* y)
{
    float resX = (float)RsGlobal->screenWidth;
    float resY = (float)RsGlobal->screenHeight;
    resY *= 1.33333333f;
    resX /= resY;

    *x /= resX;
    *y /= 1.07142857f;
}

/* This crashes the game, in the font rendering function (RenderFontBuffer), why does it happen??
void DrawString(std::string text, float posX, float posY, float sizeX, float sizeY) // tks RusJJ 
{
    if (sizeX < 0.01f) return; // size limit

    float alpha = 0.0f;
    if (sizeX < 0.1f)
    {
        alpha += (sizeX * 10.0f);
        sizeX = 0.1f;
    }
    else
    {
        alpha = 1.0f;
    }
    int finalAlpha = (int)(alpha * 255.0f);
    if (sizeY < 0.2f) sizeY = 0.2f;

    CRGBA fontColor = { 255, 255, 255, 255 };
    fontColor.a = finalAlpha;
    CRGBA edgeColor = { 0, 0, 0, 255 };
    edgeColor.a = finalAlpha;

    sizeX *= 1.2f;
    sizeY *= 1.2f;
    FixAspectRatio(&sizeX, &sizeY);

    float magicResolutionWidth = RsGlobal->screenWidth * 0.0015625f;
    float magicResolutionHeight = RsGlobal->screenHeight * 0.002232143f;
    float finalSizeX = sizeX * magicResolutionWidth;
    float finalSizeY = sizeY * magicResolutionHeight;

    CFont::SetScale(finalSizeX, finalSizeY);
    CFont::SetFontStyle(1);
    CFont::SetProportional(true);
    CFont::SetJustify(true);
    CFont::SetOrientation(eFontAlignment::ALIGN_CENTER);

    if (finalAlpha > 128)
    {
        CFont::SetEdge(1);
        CFont::SetDropColor(edgeColor);
    }
    else
    {
        CFont::SetEdge(0);
    }

    CFont::SetBackground(false, false);
    CFont::SetColor(fontColor);

    CFont::SetCentreSize(640.0f * magicResolutionWidth);

    static uint16_t gxtArray[64];
    memset(gxtArray, 0, sizeof(gxtArray));
    AsciiToGxtChar(&text[0], &gxtArray[0]);
    CFont::PrintString(posX * magicResolutionWidth, posY * magicResolutionHeight, gxtArray);
}*/
