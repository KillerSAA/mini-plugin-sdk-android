#pragma once

#include "CVector.h"
#include "CColLine.h"
#include "CColDisk.h"
#include "CColBox.h"
#include "CColSphere.h"
#include "CColTriangle.h"
#include "CColTrianglePlane.h"

union CCollisionData_un
{
  int8_t m_nNoOfLines;
  int8_t m_nNoOfDisks;
};

/* 1913 */
union CCollisionData_un2
{
  CColLine *m_pLineArray;
  CColDisk *m_pDiskArray;
};

struct CCollisionData
{
  int16_t m_nNoOfSpheres;
  int16_t m_nNoOfBoxes;
  int16_t m_nNoOfTriangles;
  CCollisionData_un _anon_0;
  uint8_t m_useDisksNotLines : 1;
  uint8_t m_useColModelSections : 1;
  uint8_t m_hasShadowTris : 1;
  CColSphere *m_pSphereArray;
  CColBox *m_pBoxArray;
  CCollisionData_un2 _anon_1;
  CVector *m_pTriCompressedVectorArray;
  CColTriangle *m_pTriangleArray;
  CColTrianglePlane *m_pTrianglePlaneArray;
  int32_t m_nNoOfShadTriangles;
  int32_t m_nNoOfShadTriangleVerts;
  CVector *m_pTriCompressedShadVectorArray;
  CColTriangle *m_pShadTriangleArray;
  int32_t *m_modelSec;
};