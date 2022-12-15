#pragma once
#include <math.h>
#include "Vector2.h"
#include "Vector3.h"
#define PI (double)3.14159265358979323846

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
	public: static int GCD(int a, int b);
	/// <summary>
	/// Calculate and return least common multiple
	/// Complexity: O(log(a+b))
	/// </summary>
	public: static int LCM(int a, int b);
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
	/// Return a random number between start and stop numbers FOR EVERY RUN
	/// Complexity: O(1)
	/// </summary>
	public: static int Random(int start, int end);
	/// <summary>
	///	Retuns the number rounded to the closest int
	/// Complexity: O(1)
	/// </summary>
	public: static int Round(double number);
	/// <summary>
	/// Returns the absolute value of the number
	/// Complexity: O(1)
	/// </summary>
	public: static double Abs(double number);
	/// <summary>
	/// Add the first elements in the list start,start+ratio,start+list*2+....+start+list*(n-1)
	/// Complexity: O(1)
	/// </summary>
	public: static int Gauss(int start, int stop, int ratio);
	/// <summary>
	/// Check if a is equal to b with an error of eps 
	/// Complexity: O(1)
	/// </summary>
	public: static bool Equal(double a, double b, double eps = 0.00001);
	/// <summary>
	/// Calculate the factorial of an int
	/// Complexity: O(n)
	/// </summary>
	public: static int Factorial(int a);
	/// <summary>
	/// Calculate combinations
	/// Complexity: O(n)
	/// </summary>
	public: static int Combinations(int n, int r);
	/// <summary>
	/// Calculate arangements
	/// Complexity: O(n)
	/// </summary>
	public: static int Arangements(int n, int r);
	/// <summary>
	/// Calculate Delta with given a, b, c
	/// Complexity: O(1)
	/// </summary>
	public: static double Delta(double a, double b, double c);
	/// <summary>
	/// Calculate the area of a circle with given radius
	/// Complexity: O(1)
	/// </summary>
	public: static double Circle_area(double r);
	/// <summary>
	/// Calculate the area of a rectangle with given length and width
	/// Complexity: O(1)
	/// </summary>
	public: static double Rectangle_area(double length, double width);
	/// <summary>
	/// Calculate the area of a square with given side
	/// Complexity: O(1)
	/// </summary>
	public: static double Square_area(double side);
	/// <summary>
	/// Calculate the perimiter of a square with given side
	/// Complexity: O(1)
	/// </summary>
	public: static double Square_perimiter(double side);
	/// <summary>
	/// Calculate the perimiter of a triangle with given sides
	/// Complexity: O(1)
	/// </summary>
	public: static double Triangle_perimiter(double a, double b, double c);
	/// <summary>
	/// Calculate the perimiter of a rectangle with given length and width
	/// Complexity: O(1)
	/// </summary>
	public: static double Rectangle_perimiter(double length, double width);
	/// <summary>
	/// Calculate the length of a circle with given radius
	/// Complexity: O(1)
	/// </summary>
	public: static double Circle_length(double r);
	/// <summary>
	/// Calculate the area of all faces of a cube with given side
	/// Complexity: O(1)
	/// </summary>
	public: static double Cube_area(double side);
	/// <summary>
	/// Calculate the area of all faces of a cuboid with given length, width and height
	/// Complexity: O(1)
	/// </summary>
	public: static double Cuboid_area(double length, double width, double height);
	/// <summary>
	/// Calculate the volume of a cube with given side
	/// Complexity: O(1)
	/// </summary>
	public: static double Cube_volume(double side);
	/// <summary>
	/// Calculate the volume of a cuboid with given length, width and height
	/// Complexity: O(1)
	/// </summary>
	public: static double Cuboid_volume(double length, double width, double height);
	/// <summary>
	/// Calculate the area of a cilinder with given radius and height
	/// Complexity: O(1)
	/// </summary>
	public: static double Cilinder_area(double radius, double height);
	/// <summary>
	/// Calculate the volume of a cilinder with given radius and height
	/// Complexity: O(1)
	/// </summary>
	public: static double Cilinder_volume(double radius, double height);
	/// <summary>
	/// Calculate the area of a sphere with given radius
	/// Complexity: O(1)
	/// </summary>
	public: static double Sphere_area(double radius);
	/// <summary>
	/// Calculate the volume of a sphere with given radius
	/// Complexity: O(1)
	/// </summary>
	public: static double Sphere_volume(double radius);
	/// <summary>
	/// Calculate the area of a triangle with given sides
	/// Complexity: O(1)
	/// </summary>
	public: static double Triangle_area(double a, double b, double c);
	/// <summary>
	/// Return true if a number is palindrome
	/// Complexity: O(sqrt(n))
	/// </summary>
	public: static bool Is_palindrome(int number);
	/// <summary>
	/// Return the reverse of a given number
	/// Complexity: O(n)
	/// </summary>
	public:static int Reverse(int number);
	public:static double From_radians_to_degrees(double radians);
	/// <summary>
	/// Calculate the angle betwen 2 vectors
	/// </summary>
	/// <param name="vect1"></param>
	/// <param name="vect2"></param>
	/// <returns>Returns the angle in RADIANS</returns>
	public:static double Angle(Vector3 vect1,Vector3 vect2);
	public:static Vector3 Cross(Vector3 vect1, Vector3 vect2);
	public:static double Distance(Vector3 vect1, Vector3 vect2);
	public:static double Dot(Vector3 vect1, Vector3 vect2);
	public:static Vector3 Lerp(Vector3 vect1, Vector3 vect2,double t);
	public:static Vector3 Lerp_unclamped(Vector3 vect1, Vector3 vect2,double t);
	public:static Vector3 Slerp(Vector3 vect1, Vector3 vect2, double t);
	public:static Vector3 Slerp_unclamped(Vector3 vect1, Vector3 vect2, double t);
	public:static Vector3 Max(Vector3 vect1, Vector3 vect2);
	public:static Vector3 Min(Vector3 vect1, Vector3 vect2);
	public:static Vector3 Move_towards(Vector3 current_pos, Vector3 target_pos,double max_distance);
	public:static Vector3 Normalized(Vector3 vect1);
	public:static Vector3 Ortho_normalized(Vector3 normal,Vector3 tangent);
	public:static Vector3 Project(Vector3 vect1, Vector3 vect2);
	public:static Vector3 Project_on_plane(Vector3 vect, Vector3 plan_normal);
	public:static Vector3 Reflect(Vector3 vect, Vector3 plan_normal);
	public:static Vector3 Rotate_towards(Vector3 current, Vector3 target_pos, double max_radians,double max_magnitude);
	public:static Vector3 Scale(Vector3 vect1, Vector3 vect2);
	public:static Vector3 Signed_angle(Vector3 from, Vector3 to,Vector3 axis);
	public:static Vector3 Smooth_damp(Vector3 current, Vector3 targer, Vector3& curent_velocity, double smooth_time, double delta_time, double max_speed = _CRT_INT_MAX);

	public:static double Angle(Vector2 vect1, Vector2 vect2);
	public:static double Distance(Vector2 vect1, Vector2 vect2);
	public:static double Dot(Vector2 vect1, Vector2 vect2);
	public:static Vector2 Lerp(Vector2 vect1, Vector2 vect2, double t);
	public:static Vector2 Lerp_unclamped(Vector2 vect1, Vector2 vect2, double t);
	public:static Vector2 Max(Vector2 vect1, Vector2 vect2);
	public:static Vector2 Min(Vector2 vect1, Vector2 vect2);
	public:static Vector2 Move_towards(Vector2 current_pos, Vector2 target_pos, double max_distance);
	public:static Vector2 Normalized(Vector2 vect1);
	public:static Vector2 Perpendicular(Vector2 in_direction);
	public:static Vector2 Reflect(Vector2 in_direction, Vector2 in_normal);
	public:static Vector2 Scale(Vector2 vect1, Vector2 vect2);
	public:static Vector2 Signed_angle(Vector2 from, Vector2 to, Vector2 axis);
	public:static Vector2 Smooth_damp(Vector2 current, Vector2 targer, Vector2& curent_velocity, double smooth_time, double delta_time, double max_speed = _CRT_INT_MAX);
};
Vector2 operator +(Vector2 vect1, Vector2 vect2);
Vector2 operator -(Vector2 vect1, Vector2 vect2);
Vector2 operator *(Vector2 vect1, double scalar);
bool operator ==(Vector2 vect1, Vector2 vect2);
bool operator <(Vector2 vect1, Vector2 vect2);
bool operator >(Vector2 vect1, Vector2 vect2);

Vector3 operator +(Vector3 vect1, Vector3 vect2);
Vector3 operator -(Vector3 vect1, Vector3 vect2);
Vector3 operator *(Vector3 vect1, double scalar);
bool operator ==(Vector3 vect1, Vector3 vect2);
bool operator <(Vector3 vect1, Vector3 vect2);
bool operator >(Vector3 vect1, Vector3 vect2);

Vector3 operator +(Vector3 vect1, Vector2 vect2);
Vector3 operator -(Vector3 vect1, Vector2 vect2);

Vector3 operator +(Vector2 vect1, Vector3 vect2);
Vector3 operator -(Vector2 vect1, Vector3 vect2);

