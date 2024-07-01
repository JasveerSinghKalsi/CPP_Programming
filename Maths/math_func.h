#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
	double length;
	double width;
};
namespace utilz
{
	//Area function overloading
	double area(double length, double width); //Area of rectangle

	double area(double side); //Area of square

	double area(Rectangle rect); //Area of rectangle using struct

	double pow(double base, int pow = 2); //Power function
}

#endif