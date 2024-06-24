#include <iostream>
#include <cmath>
#include "math_func.h"

int main()
{
	std::cout << utilz::pow(3, 3) << std::endl;
	std::cout << utilz::pow(3) << std::endl;

	Rectangle rect;
	rect.length = 5;
	rect.width = 7;
	std::cout << utilz::area(rect.length, rect.width) << std::endl;
	std::cout << utilz::area(rect.length) << std::endl;
	std::cout << utilz::area(rect) << std::endl;

	return 0;
}