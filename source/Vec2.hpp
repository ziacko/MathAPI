//this is to organize all Fvector header files into one header file
#include "Math_Dec.h" 
#ifndef VEC2_H
#define VEC2_H

template<typename VecType>
class Vec2 : protected MathRootClass
{
public:

	Vec2()
	{
		X = 10;
		Y = 30;
		ClassID = CLASS_VEC2;
	}

	Vec2(VecType Value1, VecType Value2)
	{
		X = Value1;
		Y = Value2;
		ClassID = CLASS_VEC2;
	}

	Vec2(VecType Value)
	{
		X = Value;
		Y = Value;
		ClassID = CLASS_VEC2;
	}

	void Normalize()
	{
		X = X / X;
		Y = Y / Y;
	}

	union
	{
		VecType X, R;
	};

	union
	{
		VecType Y, G;
	};

	VecType& operator[] (bool Index)
	{
		if (!Index)
		{
			return X;
		}

		return Y;
	}
};

template<typename VecType = float>
Vec2<VecType> operator + (const Vec2<VecType>& Vector, const VecType& Value)
{
	return Vec2<VecType>(Vector.X + Value, Vector.Y + Value);
}

template<typename VecType = float>
Vec2<VecType> operator + (const Vec2<VecType>& Vector1, const Vec2<VecType>& Vector2)
{
	return Vec2<VecType>(Vector1.X + Vector2.X, Vector1.Y + Vector2.Y);
}

template<typename VecType = float>
void operator += (Vec2<VecType>& Vector, const VecType& Value)
{
	Vector.X += Value;
	Vector.Y += Value;
}

template<typename VecType = float>
void operator += (Vec2<VecType>& Vector1, const Vec2<VecType>& Vector2)
{
	Vector1.X += Vector2.X;
	Vector1.Y += Vector2.Y;
}

template <typename VecType = float>
Vec2<VecType> operator - (const Vec2<VecType>& Vector1, const Vec2<VecType>& Vector2)
{
	return Vec2<VecType>(Vector1.X - Vector2.X, Vector1.Y - Vector2.Y);
}

template<typename VecType = float>
Vec2<VecType> operator * (const Vec2<VecType> &Vector1, const Vec2<VecType>& Vector2)
{
	return Vec2<VecType>(Vector1.X * Vector2.X, Vector1.Y * Vector2.Y);
}

template<typename VecType = float>
Vec2<VecType> operator / (const Vec2<VecType>& Vector1, const Vec2<VecType>& Vector2)
{
	return Vec2<VecType>(Vector1.X / Vector2.X, Vector1.Y / Vector2.Y);
}

template<typename VecType = float>
Vec2<VecType> operator % (const Vec2<VecType>& Vector1, const Vec2<VecType>& Vector2)
{
	return Vec2<VecType>(Vector1.X % Vector2.X, Vector1.Y % Vector2.Y);
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
