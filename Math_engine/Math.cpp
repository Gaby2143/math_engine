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