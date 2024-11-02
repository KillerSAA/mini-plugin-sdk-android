#include <mod/amlmod.h>
#include <string>
#include <game_sa/sdk.h> 
#include <sdk/Call.h>

#include "CRGBA.h"
#include "CFont.h"
#include "CRect.h"
#include "RsGlobal.h"

#define GOT_PTR(_addr) (uintptr_t)(*(uintptr_t *)(_addr + libs.pGame))

CFontDetails* FontDetails = (CFontDetails*)(GetSym("_ZN5CFont7DetailsE"));

void CFont::Initialise() {
    Call::FunctionFastCall<void>(GOT_PTR(0x6797F4));
}

void CFont::Shutdown() {
    Call::FunctionFastCall<void>(GOT_PTR(0x66EC90));
}

void CFont::PrintChar(float x, float y, char character) {
    Call::FunctionFastCall<void, float, float, char>(GOT_PTR(0x675650), x, y, character);
}

char *CFont::GetNextSpace(char *string) {
    return Call::FunctionFastCall<char*, char*>(GOT_PTR(0x670EB0), string);
}

char *CFont::ParseToken(char *text, CRGBA & color, bool isBlip, char *tag) {
    return Call::FunctionFastCall<char*, char*, CRGBA&, bool, char*>(GOT_PTR(0x67594C), text, color, isBlip, tag);
}

void CFont::SetScale(float fHeight) {
    Call::FunctionFastCall<void, float>(GOT_PTR(0x670954), fHeight);
}

void CFont::SetSlantRefPoint(float x, float y) {
    Call::FunctionFastCall<void, float, float>(GOT_PTR(0x674C40), x, y);
}

void CFont::SetSlant(float value) {
    Call::FunctionFastCall<void, float>(GOT_PTR(0x671CF8), value);
}

void CFont::SetColor(CRGBA color) {
    Call::FunctionFastCall<void, CRGBA>(GOT_PTR(0x673DF4), color);
}

void CFont::SetFontStyle(signed char style) {
    Call::FunctionFastCall<void, signed char>(GOT_PTR(0x67084C), style);
}

void CFont::SetWrapx(float value) {
    Call::FunctionFastCall<void, float>(GOT_PTR(0x673A2C), value);
}

void CFont::SetCentreSize(float value) {
    Call::FunctionFastCall<void, float>(GOT_PTR(0x67248C), value);
}

void CFont::SetRightJustifyWrap(float value) {
    Call::FunctionFastCall<void, float>(GOT_PTR(0x672B50), value);
}

void CFont::SetAlphaFade(float alpha) {
    Call::FunctionFastCall<void, float>(GOT_PTR(0x6740BC), alpha);
}

void CFont::SetDropColor(CRGBA color) {
    Call::FunctionFastCall<void, CRGBA>(GOT_PTR(0x674578), color);
}

void CFont::SetDropShadowPosition(signed char value) {
    Call::FunctionFastCall<void, signed char>(0x19A9AC + libs.pGame, value);
}

void CFont::SetEdge(signed char value) {
    Call::FunctionFastCall<void, signed char>(GOT_PTR(0x66E920), value);
}

void CFont::SetProportional(bool on) {
    Call::FunctionFastCall<void, bool>(GOT_PTR(0x671E50), on);
}

void CFont::SetBackground(bool enable, bool includeWrap) {
    Call::FunctionFastCall<void, bool, bool>(GOT_PTR(0x670480), enable, includeWrap);
}

void CFont::SetBackgroundColor(CRGBA color) {
    Call::FunctionFastCall<void, CRGBA>(GOT_PTR(0x67122C), color);
}

void CFont::SetJustify(bool on) {
    Call::FunctionFastCall<void, bool>(GOT_PTR(0x672B9C), on);
}

void CFont::SetOrientation(eFontAlignment alignment) {
    Call::FunctionFastCall<void, eFontAlignment>(GOT_PTR(0x675220), alignment);
}

void CFont::InitPerFrame() {
    Call::FunctionFastCall<void>(GOT_PTR(0x6736D0));
}

void CFont::RenderFontBuffer() {
    Call::FunctionFastCall<void>(GOT_PTR(0x6757F8));
}

float CFont::GetStringWidth(unsigned short* string, bool spaces, bool scriptValues) {
    return Call::FunctionFastCall<float, unsigned short*, bool, bool>(GOT_PTR(0x66E4FC), string, spaces, scriptValues);
}

/*void CFont::DrawFonts() { 
    Call::FunctionFastCall<void>(GetSym(""));
}*/

short CFont::ProcessCurrentString(bool print, float x, float y, unsigned short* text) {
    return Call::FunctionFastCall<short, bool, float, float, unsigned short*>(GOT_PTR(0x672AA4), print, x, y, text);
}

short CFont::GetNumberLines(float x, float y, unsigned short* text) {
    return Call::FunctionFastCall<short, float, float, unsigned short*>(GOT_PTR(0x675048), x, y, text);
}

short CFont::ProcessStringToDisplay(float x, float y, unsigned short* text) {
    return Call::FunctionFastCall<short, float, float, unsigned short*>(0x5AA4B4 + libs.pGame, x, y, text);
}

void CFont::GetTextRect(CRect *rect, float x, float y, unsigned short* text) {
    Call::FunctionFastCall<void, CRect*, float, float, unsigned short*>(GOT_PTR(0x671E24), rect, x, y, text);
}

void CFont::PrintString(float x, float y, unsigned short* text) {
    Call::FunctionFastCall<void, float, float, unsigned short*>(GOT_PTR(0x6737C4), x, y, text);
}

void CFont::PrintStringFromBottom(float x, float y, unsigned short* text) {
    Call::FunctionFastCall<void, float, float, unsigned short*>(GOT_PTR(0x67018C), x, y, text);
}

void AsciiToGxtChar(const char* text, unsigned short* gxt) {
    Call::FunctionFastCall<void, const char*, unsigned short*>(GOT_PTR(0x6724F8), text, gxt);
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

///* This crashes the game, in the font rendering function (RenderFontBuffer), why does it happen??
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

    CFont::SetScale(finalSizeY);
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
}//*/
