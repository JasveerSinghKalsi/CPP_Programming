#include "math_func.h"

double area(double length, double width)
{
	return length * width;
}

double area(double side)
{
	return side * side;
}

double area(Rectangle rect)
{
	return rect.length * rect.width;
}

double pow(int base, int pow)
{
	int pow_num = 1;
	for (int i = 0; i < pow; i++)
	{
		pow_num *= base;
	}
	return pow_num;	
}