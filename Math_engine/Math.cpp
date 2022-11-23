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
	else return -1;
}
double Math::Rectangle_area(double length, double width)
{
	if(length > 0 && width > 0) return length * width;
	else return -1;
}
double Math::Square_area(double side)
{
	if(side > 0) return side * side;
	else return -1;
}
double Math::Square_perimiter(double side)
{
	if (side > 0) return side * 4;
	else return -1;
}
double Math::Triangle_perimiter(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0) return a + b + c;
	else return -1;
}
double Math::Rectangle_perimiter(double length, double width)
{
	if (length > 0 && width > 0) return (2 * length) + (2 * width);
	else return -1;
}
double Math::Circle_length(double r)
{
	if (r > 0) return 2 * PI * r;
	else return -1;
}
double Math::Cube_area(double side)
{
	if (side > 0) return Square_area(side) * 6;
	else return -1;
}
double Math::Cuboid_area(double length, double width, double height)
{
	if (length > 0 && width > 0 && height > 0) return Rectangle_area(length, width) * 2 + Rectangle_area(length, height) * 2 + Rectangle_area(width, height) * 2;
	else return -1;
}
double Math::Cube_volume(double side)
{
	if (side > 0) return side * side * side;
	else return -1;
}
double Math::Cuboid_volume(double length, double width, double height)
{
	if (length > 0 && width > 0 && height > 0) return length * width * height;
	else return -1;
}
double Math::Cilinder_area(double radius, double height)
{
	if (radius > 0 && height > 0) return (2 * PI * radius * height) + (2 * PI * radius * radius);
	else return -1;
}
double Math::Cilinder_volume(double radius, double height)
{
	if (radius > 0 && height > 0) return PI*radius*radius*height;
	else return -1;
}
double Math::Sphere_area(double radius)
{
	if (radius > 0) return 4 * PI * radius * radius;
	else return -1;
}
double Math::Sphere_volume(double radius)
{
	if (radius > 0) return (4 / 3) * PI * radius * radius * radius;
	else return - 1;
}