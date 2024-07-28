#pragma once
// compared to sa pc, sa mobile has few functions related to vectors

#include <cmath>

struct CVector {
    float x, y, z;
    CVector();
    //CVector(float X, float Y, float Z);
    inline CVector(CVector const& src) {
        x = src.x; y = src.y; z = src.z;
    }

    /*inline CVector(RwV3d const &right) {
        FromRwV3d(right);
    }
    */

    // for some reason sa mobile doesn't have some vector functions that the PC has, so here they are

    // Returns length of vector
    float Magnitude() {
        return sqrt(x * x + y * y + z * z);
    }
    // Returns length of 2d vector
    float Magnitude2D() {
        return sqrt(x * x + y * y);
    }

    float MagnitudeSqr2D() const { return x * x + y * y; }

    // Normalises a vector
    void Normalise();

    // Normalises a vector and returns length
    float NormaliseAndMag();

    // Performs cross calculation
    inline void Cross(const CVector& left, const CVector &right) {
        x = right.z * left.y - left.z * right.y;
        y = left.z * right.x - left.x * right.z;
        z = left.x * right.y - right.x * left.y;
    }

    // Adds left + right and stores result
    inline void Sum(const CVector& left, const CVector &right){
        x = left.x + right.x;
        y = left.y + right.y;
        z = left.z + right.z;
    }

    // Subtracts left - right and stores result
    inline void Difference(const CVector& left, const CVector &right) {
        x = left.x - right.x;
        y = left.y - right.y;
        z = left.z - right.z;
    }

    inline void operator=(const CVector& right){
        x = right.x;
        y = right.y;
        z = right.z;
    }

    inline void operator+=(const CVector& right) {
        x = right.x + x;
        y = right.y + y;
        z = right.z + z;
    }

    inline void operator-=(const CVector& right) {
        x = x - right.x;
        y = y - right.y;
        z = z - right.z;
    }

    inline void operator*=(float multiplier) {
        x = multiplier * x;
        y = multiplier * y;
        z = multiplier * z;
    }

    inline void operator/=(float divisor) {
        float a = 1.0 / divisor;
        x = a * x;
        y = a * y;
        z = a * z;
    }

    // matrix * vector multiplication
    void FromMultiply(struct CMatrix const& matrix, CVector const& vector);
    void FromMultiply3x3(struct CMatrix const& matrix, CVector const& vector);

    inline void Set(float X, float Y, float Z) {
        x = X; y = Y; z = Z;
    }

    /*inline RwV3d ToRwV3d() const {
        return{ x, y, z };
    }

    inline void FromRwV3d(RwV3d const &rwvec) {
        x = rwvec.x; y = rwvec.y; z = rwvec.z;
    }*/

    inline float Heading() {
        return atan2f(-x, y);
    }
};

inline float DistanceBetweenPoints(const CVector &pointOne, const CVector &pointTwo) {
    float dx = pointTwo.x - pointOne.x;
    float dy = pointTwo.y - pointOne.y;
    float dz = pointTwo.z - pointOne.z;
    CVector diff;
    diff.x = dx; diff.y = dy; diff.z = dz;
    return diff.Magnitude();
}

struct CVector2D {
    float x, y;

    inline CVector2D() {

    }

    inline CVector2D(float X, float Y) {
        x = X;
        y = Y;
    }

    CVector2D(const class CVector& vec3d);

    // Returns length of vector
    // for some reason sa mobile doesn't have some vector functions that the PC has, so here they are

    float Magnitude(){
        return sqrt(x * x + y * y);
    }

    float MagnitudeSqr() const { return x * x + y * y; }

    inline CVector2D(CVector2D const& src) {
        x = src.x; y = src.y;
    }

    inline void Set(float X, float Y) {
        x = X; y = Y;
    }

    inline void Sum(CVector2D &a, CVector2D &b) {
        x = a.x + b.x;
        y = a.y + b.y;
    }

    inline void Difference(CVector2D &a, CVector2D &b) {
        x = a.x - b.x;
        y = a.y - b.y;
    }

    inline void operator=(const CVector2D& right){
        x = right.x;
        y = right.y;
    }

    inline void operator+=(const CVector2D& right) {
        x += right.x;
        y += right.y;
    }

    inline void operator-=(const CVector2D& right) {
        x -= right.x;
        y -= right.y;
    }

    inline void operator *= (float multiplier) {
        x *= multiplier;
        y *= multiplier;
    }

    inline void operator /= (float divisor) {
        x /= divisor;
        y /= divisor;
    }
    
};

inline float DistanceBetweenPoints(const CVector2D &pointOne, const CVector2D &pointTwo) {
    float dx = pointTwo.x - pointOne.x;
    float dy = pointTwo.y - pointOne.y;
    CVector2D diff;
    diff.x = dx; diff.y = dy;
    return diff.Magnitude();
}