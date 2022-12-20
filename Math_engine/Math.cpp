#include "Math.h"
bool Math::Is_even(long long int number)
{
	return number % 2 == 0 ? true : false;
}
int Math::GCD(int a, int b)
{
	while (a!=b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
int Math::LCM(int a, int b)
{
	return a * b / GCD(a, b);
}
double Math::Arithmetic_mean(double numbers[], int n)
{
	int mean = 0;
	for (int i = 0; i < n; i++)
	{
		mean = mean + numbers[i];
	}
	return mean / n;
}
double Math::Geometric_mean(double numbers[], int n)
{
	int mean = 1;
	for (int i = 0; i < n; i++)
	{
		mean = mean * numbers[i];
	}
	return pow(mean, 1/(double)n);
}
int Math::Round_up(double number)
{
	if (number < 0)
	{
		return (int)number;
	}
	return (int)number + 1;
}
int Math::Round_down(double number)
{
	if (number < 0)
	{
		return (int)number - 1;
	}
	return (int)number;
}
bool Math::Is_prime(long long int number)
{
	if (number <= 0) return false;
	if (number == 2) return true;
	for (int i = 2; i < number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
double Math::Abs(double number)
{
	return number < 0 ? -number : number;
}
int Math::Round(double number)
{
	if (Abs(number - (int)number) < 0.5)
	{
		return Round_down(number);
	}
	if (Abs(number - (int)number) >= 0.5)
	{
		return Round_up(number);
	}
}
int Math::Gauss(int start, int stop, int ratio)
{
	return ((start + stop) * (((stop - start) / ratio) + 1)) / 2;
}
int Math::Factorial(int a)
{
	int res = 1;
	while (a > 0)
	{
		res = res * a;
		a--;
	}
	return res;
}
int Math::Combinations(int n, int r)
{
	return Factorial(n) / (Factorial(r) * Factorial(n - r));
}
int Math::Arangements(int n, int r)
{
	return Factorial(n) / Factorial(n - r);
}
double Math::Delta(double a, double b, double c)
{
	return (b * b) - 4*a*c;
}
double Math::Circle_area(double r)
{
	if (r > 0) return PI * (r * r);
	return -1;
}
double Math::Rectangle_area(double length, double width)
{
	if(length > 0 && width > 0) return length * width;
	return -1;
}
double Math::Square_area(double side)
{
	if(side > 0) return side * side;
	return -1;
}
double Math::Square_perimiter(double side)
{
	if (side > 0) return side * 4;
	return -1;
}
double Math::Triangle_perimiter(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0) return a + b + c;
	return -1;
}
double Math::Rectangle_perimiter(double length, double width)
{
	if (length > 0 && width > 0) return (2 * length) + (2 * width);
	return -1;
}
double Math::Circle_length(double r)
{
	if (r > 0) return 2 * PI * r;
	return -1;
}
double Math::Cube_area(double side)
{
	if (side > 0) return Square_area(side) * 6;
	return -1;
}
double Math::Cuboid_area(double length, double width, double height)
{
	if (length > 0 && width > 0 && height > 0) return Rectangle_area(length, width) * 2 + Rectangle_area(length, height) * 2 + Rectangle_area(width, height) * 2;
	return -1;
}
double Math::Cube_volume(double side)
{
	if (side > 0) return side * side * side;
	return -1;
}
double Math::Cuboid_volume(double length, double width, double height)
{
	if (length > 0 && width > 0 && height > 0) return length * width * height;
	return -1;
}
double Math::Cilinder_area(double radius, double height)
{
	if (radius > 0 && height > 0) return (2 * PI * radius * height) + (2 * PI * radius * radius);
	return -1;
}
double Math::Cilinder_volume(double radius, double height)
{
	if (radius > 0 && height > 0) return PI*radius*radius*height;
	return -1;
}
double Math::Sphere_area(double radius)
{
	if (radius > 0) return 4 * PI * radius * radius;
	return -1;
}
double Math::Sphere_volume(double radius)
{
	if (radius > 0) return (4 / 3) * PI * radius * radius * radius;
	return - 1;
}
double Math::Triangle_area(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0) return sqrt((Triangle_perimiter(a, b, c)) * ((Triangle_perimiter(a, b, c) / 2) - a) * ((Triangle_perimiter(a, b, c) / 2) - b) * ((Triangle_perimiter(a, b, c) / 2) - c));
	return -1;
}
bool Math::Is_palindrome(int number)
{
	int ogl = 0;
	int aux_number = number;
	while (number > 0)
	{
		ogl = ogl * 10 + number % 10;
		number /= 10;
	}
	if (aux_number == ogl) return true;
	else return false;
}
Vector2 operator +(Vector2 vect1, Vector2 vect2)
{
	return Vector2(vect1.x + vect2.x, vect1.y + vect2.y);
}
Vector2 operator -(Vector2 vect1, Vector2 vect2)
{
	return Vector2(vect1.x - vect2.x, vect1.y - vect2.y);
}
bool operator ==(Vector2 vect1, Vector2 vect2)
{
	if (vect1.x == vect2.x && vect1.y == vect2.y) return true;
	return false;
}
int Math::Reverse(int number)
{
	int rev = 0;
	while (number > 0)
	{
		rev = rev * 10 + number % 10;
		number /= 10;
	}
	return rev;
}

double Math::From_radians_to_degrees(double radians)
{
	return radians * (180 / PI);
}

bool operator <(Vector2 vect1, Vector2 vect2)
{
	if (vect1.Module()<vect2.Module()) return true;
	return false;
}
bool operator >(Vector2 vect1, Vector2 vect2)
{
	if (vect1.Module() > vect2.Module()) return true;
	return false;
}
Vector3 operator +(Vector3 vect1, Vector2 vect2)
{
	return Vector3(vect1.x + vect2.x, vect1.y + vect2.y, vect1.z);
}
Vector3 operator -(Vector3 vect1, Vector2 vect2)
{
	return Vector3(vect1.x - vect2.x, vect1.y - vect2.y, vect1.z);
}
Vector3 operator +(Vector2 vect1, Vector3 vect2)
{
	return Vector3(vect1.x + vect2.x, vect1.y + vect2.y, vect2.z);
}
Vector3 operator -(Vector2 vect1, Vector3 vect2)
{
	return Vector3(vect1.x - vect2.x, vect1.y - vect2.y, vect2.z);
}
Vector3 operator *(Vector3 vect1, double scalar)
{
	return Vector3(vect1.x * scalar, vect1.y * scalar, vect1.z * scalar);
}
Vector2 operator *(Vector2 vect1, double scalar)
{
	return Vector2(vect1.x * scalar, vect1.y * scalar);
}
bool operator ==(Vector3 vect1, Vector3 vect2)
{
	if (vect1.Module() == vect2.Module()) return true;
	return false;
}
bool operator <(Vector3 vect1, Vector3 vect2)
{
	if (vect1.Module() < vect2.Module()) return true;
	return false;
}
bool operator >(Vector3 vect1, Vector3 vect2)
{
	if (vect1.Module() > vect2.Module()) return true;
	return false;
}
Vector3 operator +(Vector3 vect1, Vector3 vect2)
{
	return Vector3(vect1.x + vect2.x, vect1.y + vect2.y, vect1.z + vect2.z);
}
Vector3 operator -(Vector3 vect1, Vector3 vect2)
{
	return Vector3(vect1.x - vect2.x, vect1.y - vect2.y, vect1.z - vect2.z);
}
Vector3 Math::Cross(Vector3 vect1, Vector3 vect2)
{
	return Vector3((vect1.y * vect2.z) - (vect1.z * vect2.y), (vect2.x * vect1.z) - (vect2.z * vect1.x), (vect1.x * vect2.y) - (vect1.y * vect2.x));
}


double Math::Angle(Vector3 vect1, Vector3 vect2)
{
	return asin(Cross(vect1, vect2).Module() / (vect1.Module() * vect2.Module()));
}
double Math::Distance(Vector3 vect1, Vector3 vect2)
{
	return sqrt(((vect1.x - vect2.x) * (vect1.x - vect2.x)) + (vect1.y - vect2.y)*(vect1.y - vect2.y) + (vect1.z - vect2.z)*(vect1.z - vect2.z));
}
double Math::Distance(Vector2 vect1, Vector2 vect2)
{
	return sqrt(((vect1.x - vect2.x) * (vect1.x - vect2.x)) + ((vect1.y - vect2.y) * (vect1.y - vect2.y)));
}
Vector3 Math::Max(Vector3 vect1, Vector3 vect2)
{
	Vector3 max;
	if (vect1.x >= vect2.x)
	{
		max.x = vect1.x;
	}
	else
	{
		max.x = vect2.x;
	}
	if (vect1.y >= vect2.y)
	{
		max.y = vect1.y;
	}
	else
	{
		max.y = vect2.y;
	}
	if (vect1.z >= vect2.z)
	{
		max.z = vect1.z;
	}
	else
	{
		max.z = vect2.z;
	}
	return max;
}
Vector2 Math::Max(Vector2 vect1, Vector2 vect2)
{
	Vector2 max;
	if (vect1.x >= vect2.x)
	{
		max.x = vect1.x;
	}
	else
	{
		max.x = vect2.x;
	}
	if (vect1.y >= vect2.y)
	{
		max.y = vect1.y;
	}
	else
	{
		max.y = vect2.y;
	}
	return max;
}
Vector3 Math::Min(Vector3 vect1, Vector3 vect2)
{
	Vector3 min;
	if (vect1.x <= vect2.x)
	{
		min.x = vect1.x;
	}
	else
	{
		min.x = vect2.x;
	}
	if (vect1.y <= vect2.y)
	{
		min.y = vect1.y;
	}
	else
	{
		min.y = vect2.y;
	}
	if (vect1.z <= vect2.z)
	{
		min.z = vect1.z;
	}
	else
	{
		min.z = vect2.z;
	}
	return min;
}
Vector2 Math::Min(Vector2 vect1, Vector2 vect2)
{
	Vector2 min;
	if (vect1.x <= vect2.x)
	{
		min.x = vect1.x;
	}
	else
	{
		min.x = vect2.x;
	}
	if (vect1.y <= vect2.y)
	{
		min.y = vect1.y;
	}
	else
	{
		min.y = vect2.y;
	}
	return min;
}
double Math::Dot(Vector3 vect1, Vector3 vect2)
{
	return ((vect1.x * vect2.x) + (vect1.y * vect2.y) + (vect1.z * vect2.z));
}
double Math::Dot(Vector2 vect1, Vector2 vect2)
{
	return ((vect1.x * vect2.x) + (vect1.y * vect2.y));
}  
Vector3 Math::Project(Vector3 vect1, Vector3 vect2)
{
	return vect1 * (Dot(vect1, vect2) / vect1.Module() * vect1.Module());
}
Vector2 Math::Project(Vector2 vect1, Vector2 vect2)
{
	return vect1*(Dot(vect1, vect2) / vect1.Module()*vect1.Module());
}
Vector3 Math::Lerp(Vector3 vect1, Vector3 vect2, double t)
{
	if (t > 1) return vect2;
	return vect1 + (vect2 - vect1) * t;
}
Vector3 Math::Lerp_unclamped(Vector3 vect1, Vector3 vect2, double t)
{
	return vect1 + (vect2 - vect1) * t;
}
Vector2 Math::Lerp(Vector2 vect1, Vector2 vect2, double t)
{
	if (t > 1) return vect2;
	return vect1 + (vect2 - vect1) * t;
}
Vector2 Math::Lerp_unclamped(Vector2 vect1, Vector2 vect2, double t)
{
	return vect1 + (vect2 - vect1) * t;
}
Vector3 Math::Slerp(Vector3 vect1, Vector3 vect2, double t)
{
	double angle = acos(Dot(vect1, vect2));
	if (t > 1) return vect2;
	return vect1 * ((sin(1 - t) * angle) / sin(angle)) + vect2 * (sin(t * angle) / sin(angle));
}
Vector3 Math::Slerp_unclamped(Vector3 vect1, Vector3 vect2, double t)
{
	double angle = acos(Dot(vect1, vect2));
	return vect1 * ((sin(1 - t) * angle) / sin(angle)) + vect2 * (sin(t * angle) / sin(angle));
}