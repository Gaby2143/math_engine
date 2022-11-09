#include "Math.h"
bool Math::Is_even(long long int number)
{
	return number % 2 == 0 ? true : false;
}
int Math::Cmmdc(int a, int b)
{
	while (a!=b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
int Math::Cmmmc(int a, int b)
{
	return a * b / Cmmdc(a, b);
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
	return pow(mean, 1/n);
}