#pragma once 

#include "CRGBA.h"
#include "CRect.h"
#include <string>

enum eFontAlignment : unsigned char {
    ALIGN_CENTER,
    ALIGN_LEFT,
    ALIGN_RIGHT
};

struct CFontSize
{
  uint8_t x[209];
  uint8_t NonProportionalWidth;
};

struct CFontDetails
{
    CRGBA Color;
    float ScaleX;
    float ScaleY;
    float Slope;
    float SlopeRefX;
    float SlopeRefY;
    bool Justify;
    bool Centre;
    bool RightJustify;
    bool Background;
    bool BackgroundOutline;
    bool Proportional;
    bool Shadow;
    int8_t undefined; // ??
    float AlphaFade;
    CRGBA BGColor;
    float WrapEnd;
    float Centrex;
    float RightJustifyWrap;
    uint8_t Style;
    uint8_t ExtraFont;
    int8_t DropAmount;
    CRGBA DropColor;
    int8_t EdgeAmount;
    int8_t EdgeSpace;
    char undefined1[3]; // ??
};

struct CFont
{
    int8_t padding[1];

    // funcs //
    static void Initialise();
        // CFont closing
    static void Shutdown();
    // this adds a single character into rendering buffer
    static void PrintChar(float x, float y, char character);
    // get next ' ' character in a string
    static char *GetNextSpace(char *string);
    // tags processing
    static char *ParseToken(char *text, CRGBA & color, bool isBlip, char *tag);
    // text scaling
    static void SetScale(float w, float h);
    // text scaling depends on current language
    //static void SetScaleForCurrentlanguage(float w, float h);  doesn't exist on sa mobile?

    // set text rotation point
    static void SetSlantRefPoint(float x, float y);
    // set text rotation angle
    static void SetSlant(float value);
    // set text color
    static void SetColor(CRGBA color);
    // set text style
    static void SetFontStyle(signed char style);
    // set line width at right
    static void SetWrapx(float value);
    // set line width at center
    static void SetCentreSize(float value);
    static void SetRightJustifyWrap(float value);
    // like a 'global' font alpha, multiplied with each text alpha (from SetColor)
    static void SetAlphaFade(float alpha);
    // drop color is used for text shadow and text outline
    static void SetDropColor(CRGBA color);
    // set shadow size
    static void SetDropShadowPosition(signed char value);
    // set outline size
    static void SetEdge(signed char value);
    // toggles character proportions in text
    static void SetProportional(bool on);
    // setups text background
    static void SetBackground(bool enable, bool includeWrap);
    // sets background color
    static void SetBackgroundColor(CRGBA color);
    static void SetJustify(bool on);
    static void SetOrientation(eFontAlignment alignment);
    // need to call this each frame
    static void InitPerFrame();
    // draw text we have in buffer
    static void RenderFontBuffer();
    static float GetStringWidth(unsigned short* string, bool spaces, bool scriptValues = false);
    // same as RenderFontBuffer()
    static void DrawFonts();
    static short ProcessCurrentString(bool print, float x, float y, unsigned short* text);
    static short GetNumberLines(float x, float y, unsigned short* text);
    static short ProcessStringToDisplay(float x, float y, unsigned short* text);
    static void GetTextRect(CRect *rect, float x, float y, unsigned short* text);
    static void PrintString(float x, float y, unsigned short* text);
    static void PrintStringFromBottom(float x, float y, unsigned short* text);
};

void AsciiToGxtChar(const char* text, unsigned short* gxt);
void FixAspectRatio(float* x, float* y);
void DrawString(std::string text, float posX, float posY, float sizeX, float sizeY);

extern CFontDetails* FontDetails;