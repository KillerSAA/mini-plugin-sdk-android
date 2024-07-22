#pragma once

struct RwMatrix;

struct CMatrix
{
  float xx;
  float yx;
  float zx;
  float pad1;
  float xy;
  float yy;
  float zy;
  float pad2;
  float xz;
  float yz;
  float zz;
  float pad3;
  float tx;
  float ty;
  float tz;
  float pad4;
  RwMatrix *m_pRwMat;
  uint32_t m_owner;
};
