#pragma once

/* 312 */
struct RQVector_s
{
  float x;
  float y;
  float z;
  float w;
};

/* 313 */
struct RQVector_s2
{
  float r;
  float g;
  float b;
  float a;
};

/* 311 */
union RQVector_un
{
  float arr[4];
  RQVector_s _anon_0;
  RQVector_s2 _anon_1;
};

/* 310 */
struct RQVector
{
  RQVector_un _anon_0;
};