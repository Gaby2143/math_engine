#pragma once
class Vector3
{
	public:double x;
	public:double y;
	public:double z;
	public:Vector3();
	public:Vector3(double x, double y, double z);
	public:double Module();
	public:Vector3 Normalized();
	public:double Sqrt_module();

};

