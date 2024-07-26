#pragma once

struct RwOpenGLVertex
{
  float x;
  float y;
  float z;
  float rhw;
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
  float s;
  float t;
};
typedef RwOpenGLVertex RwIm2DVertex;
