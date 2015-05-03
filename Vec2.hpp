//this is to organize all Fvector header files into one header file
#include "Math_Dec.h" 
#ifndef VEC2_H
#define VEC2_H

template<typename VecType = float>
class Vec2 : public MathRootClass
{
public:

	Vec2(VecType Arg1, VecType Arg2)
	{
		X = Arg1;
		Y = Arg2;
	}
	union
	{
		VecType X, R;
	};

	union
	{
		VecType Y, G;
	};

ClassID : CLASS_VEC2;
};

template<typename VecType = float>
Vec2<VecType> operator * (const Vec2<VecType> &Vector1, const Vec2<VecType> &Vector2)
{
	return Vec2<VecType>(Vector1.X * Vector2.X, Vector1.Y * Vector2.Y);
}

#endif
/*template<typename VecType = float>
class Vec3 : public Vec2
{
public:

	Vec3(VecType Arg1, VecType Arg2, VecType Arg3)
	{
		X = Arg1;
		Y = Arg2;
		Z = Arg3;
	}

	union
	{
		VecType Z, B;
	};
};
template<typename VecType = float>
class vec4 : public Vec3
{
public:

	Vec4(VecType Arg1, VecType Arg2, VecType Arg3, VecType Arg4)
	{
		X = Arg1;
		Y = Arg2;
		Z = Arg3;
		W = Arg4;
	}

	union
	{
		VecType W, A;
	};
};*/
