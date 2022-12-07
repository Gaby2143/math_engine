#pragma once
#include <math.h>
class Vector2
{
	public: double x;
	public: double y;
	public: Vector2();
	public: Vector2(double x, double y);
	public: double Module();
	public:double Sqrt_module();
	public:Vector3 Normalized();
};

