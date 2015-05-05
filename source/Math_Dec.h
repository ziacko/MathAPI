//here lie all of the forward declarations for the Foundation Math API
#ifndef MATH_DECLARATIONS_H
#define MATH_DECLARATIONS_H

#include <cmath>
#include <math.h>

#define CLASS_ROOT 0

#define CLASS_VEC2 1L << 1
#define CLASS_VEC3 1L << 2
#define CLASS_VEC4 1L << 3

#define CLASS_MAT2 1L << 4
#define CLASS_MAT2X3 1L << 5
#define CLASS_MAT2X4 1L << 6

#define CLASS_MAT3 1L << 7
#define CLASS_MAT3X2 1L << 8
#define CLASS_MAT3X4 1L << 9

#define CLASS_MAT4 1L << 10
#define CLASS_MAT4X2 1L << 11
#define CLASS_MAT4X3 1L << 12

#define CLASS_QUATERNION 1L << 13
#define CLASS_TRANSFORM 1L << 14

//needs to be renamed later
class MathRootClass
{
protected:
	MathRootClass()
	{
		ClassID = CLASS_ROOT;
	}

	unsigned int ClassID;
};
template<typename VecType = float>
class Vec2;

template<typename VecType = float>
class Vec3;

template<typename VecType = float>
class Vec4;

class Mat2;
class Mat2x3;
class Mat2x4;

class Mat3;
class Mat3x2;
class Mat3x4;

class Mat4;
class Mat4x2;
class Mat4x3;

class Quaternion;

class Transform;
#endif
