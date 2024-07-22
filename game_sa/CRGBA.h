#pragma once

struct RwRGBA_Base_Colors
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};
union RwRGBA_Base_un
{
    RwRGBA_Base_Colors _anon_0;
    uint8_t col[4];
};

struct RwRGBA_Base
{
    RwRGBA_Base_un _anon_0;
};

struct RwRGBA// : RwRGBA_Base
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;
};
//struct CRGBA : RwRGBA {};

class CRGBA {
public:
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;

    CRGBA(unsigned char red, unsigned char green, unsigned char blue);
    CRGBA(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    CRGBA(CRGBA const &rhs);
    CRGBA(unsigned int intValue);
    CRGBA(RwRGBA const &rhs);
    CRGBA();

    void Set(unsigned char red, unsigned char green, unsigned char blue);
    void Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    void Set(unsigned int intValue);
    void Set(CRGBA const &rhs);
    void Set(CRGBA const &rhs, unsigned char alpha);
    void Set(RwRGBA const &rwcolor);

    CRGBA ToRGB() const;
    unsigned int ToInt() const;
    unsigned int ToIntARGB() const;
    RwRGBA ToRwRGBA() const;

    void FromRwRGBA(RwRGBA const &rwcolor);
    void FromARGB(unsigned int intValue);

    void Invert();
    CRGBA Inverted() const;

    bool operator==(CRGBA const &rhs) const;
    CRGBA &operator=(CRGBA const &rhs);
};

