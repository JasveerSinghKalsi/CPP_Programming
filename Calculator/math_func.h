#ifndef MATH_FUNC_H
#define MATH_FUNC_H

#include <iostream> //For Inputs and Outputs
#include <cmath>	//For Mathematics Functions
#define PI 3.14159265358979323846
const double EPSILON = 1e-10;
const double TAN_THRESHOLD = 1e10;

class SimpleCalculator
{
private:
	double num1, num2;

public:
	void setNumbersSimple(double n1, double n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void displaySimpleCalucator()
	{
		std::cout << "Sum of " << num1 << " & " << num2 << " is: " << num1 + num2 << std::endl;
		std::cout << "Difference of " << num1 << " & " << num2 << " is: " << num1 - num2 << std::endl;
		std::cout << "Product of " << num1 << " & " << num2 << " is: " << num1 * num2 << std::endl;
		std::cout << "Division of " << num1 << " & " << num2 << " is: " << num1 / num2 << std::endl;
	}
};

class ScientificCalculator
{
private:
	double num1;

public:
	void setNumbersScientfic(double n1)
	{
		num1 = n1;
	}
	void displayScientificCalculator()
	{
		std::cout << "Square Root of " << num1 << " is: " << sqrt(num1) << std::endl;
		double angle = num1 * (PI / 180.0);
		if (std::abs(std::sin(angle)) < EPSILON)
		{
			std::cout << "Sin(" << num1 << ") is: 0" << std::endl;
		}
		else
		{
			std::cout << "Sin(" << num1 << ") is: " << std::sin(angle) << std::endl;
		}
		if (std::abs(std::cos(angle)) < EPSILON)
		{
			std::cout << "Cos(" << num1 << ") is: 0" << std::endl;
		}
		else
		{
			std::cout << "Cos(" << num1 << ") is: " << std::cos(angle) << std::endl;
		}
		if (std::abs(std::tan(angle)) > TAN_THRESHOLD)
		{
			std::cout << "Tan(" << num1 << ") is: undefined" << std::endl;
		}
		else if (std::abs(std::tan(angle)) < EPSILON)
		{
			std::cout << "Tan(" << num1 << ") is: 0" << std::endl;
		}
		else
		{
			std::cout << "Tan(" << num1 << ") is: " << std::round(std::tan(angle) * 1000.0) / 1000.0 << std::endl;
		}
	}
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

#endif // MATH_FUNC_H