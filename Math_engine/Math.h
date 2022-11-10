#pragma once
#include <math.h>;

class Math
{
	/// <summary>
	/// Return true if a number is even
	/// Complexity: O(1)
	/// </summary>
	public: static bool Is_even(long long int number);
	/// <summary>
	/// Return true if a number is prime
	/// Complexity: O(sqrt(n))
	/// </summary>
	public: static bool Is_prime(long long int number);
	/// <summary>
	/// Return the number rounded up to the closest integer
	/// Complexity: O(1)
	/// </summary>
	public: static int Round_up(double number);
	/// <summary>
	/// Return the number rounded down to the closest integer
	/// Complexity: O(1)
	/// </summary>
	public: static int Round_down(double number);
	/// <summary>
	/// Calculate and return the greatest common divisor of 2 numbers
	/// Complexity: O(log(a+b))
	/// </summary>
	public: static int Cmmdc(int a, int b);
	/// <summary>
	/// Calculate and return least common multiple
	/// Complexity: O(log(a+b))
	/// </summary>
	public: static int Cmmmc(int a, int b);
	/// <summary>
	/// Return the average mean of n numbers given in the array "double *numbers"
	/// Complexity: O(n)
	/// </summary>
	public: static double Arithmetic_mean(double numbers[], int n);
	/// <summary>
	/// Return the geometric mean of n numbers given in the array "double *numbers"
	/// Complexity: O(n)
	/// </summary>
	public: static double Geometric_mean(double numbers[], int n);
	/// <summary>
	/// Return the weighted mean of n numbers given in the array "double *numbers" with the wheights given in the array "double *weights"
	/// Complexity: O(n)
	/// </summary>
	public: static double Weighted_mean(double* numbers, double* weights, int n);
	/// <summary>
	/// Return a random number between start and stop numbers FOR EVERY RUN
	/// Complexity: O(1)
	/// </summary>
	public: static int Random(int start, int end);
};




