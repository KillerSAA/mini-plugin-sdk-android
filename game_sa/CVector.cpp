#include <mod/amlmod.h>
#include <sdk/Call.h>
#include <game_sa/sdk.h>
#include <cmath>

#include "CVector.h"

/*CVector::CVector(const CVector& v) {
    x = v.x;
    y = v.y;
    z = v.z;
}*/

// Normalises a vector
void CVector::Normalise()
{
	Call::FunctionFastCall<void>(GetSym("_ZN7CVector9NormaliseEv"));
}

// Normalises a vector and returns length
float CVector::NormaliseAndMag()
{
	return Call::FunctionFastCall<float>(GetSym("_ZN7CVector15NormaliseAndMagEv"));
}

void CVector::FromMultiply(CMatrix const& matrix, CVector const& vector)
{
    Call::FunctionFastCall<void, CMatrix const&, CVector const&>(GetSym("_ZN7CVector12FromMultiplyERK7CMatrixRKS_"), matrix, vector);
}

void CVector::FromMultiply3x3(CMatrix  const& matrix, CVector const& vector)
{
	Call::FunctionFastCall<void, CMatrix const&, CVector const&>(GetSym("_ZN7CVector15FromMultiply3X3ERK7CMatrixRKS_"), matrix, vector);
}




