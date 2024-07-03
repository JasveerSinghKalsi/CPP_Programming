#include <iostream> //For Inputs and Outputs
#include <cmath>	//For Mathematics Functions

class SimpleCalculator
{
private:
	float sum, difference, product, quotient;

public:
	float add(float a, float b)
	{
		sum = a + b;
		return sum;
	}
	float subtract(float a, float b)
	{
		difference = a - b;
		return difference;
	}
	float multiply(float a, float b)
	{
		product = a * b;
		return product;
	}
	float divide(float a, float b)
	{
		quotient = a / b;
		return quotient;
	}
};

class ScientificCalculator
{
private:
	float power, squareRoot, sine, cosine;

public:
	float set_power(float a, float b)
	{
		power = pow(a, b);
		return power;
	}
	float set_squareRoot(float a)
	{
		squareRoot = sqrt(a);
		return squareRoot;
	}
	float set_sine(float a)
	{
		sine = sin(a);
		return sine;
	}
	float set_cosine(float a)
	{
		cosine = cos(a);
		return cosine;
	}
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
	void displayCalculator(int input, float a, float b)
	{
		switch (input)
		{
		case 1:
			std::cout << "Sum: " << add(a, b) << std::endl;
			std::cout << "difference: " << subtract(a, b) << std::endl;
			std::cout << "Multiply: " << multiply(a, b) << std::endl;
			std::cout << "quotient: " << divide(a, b) << std::endl;
			break;
		case 2:
			std::cout << "Power: " << set_power(a, b) << std::endl;
			std::cout << "Square Root: " << set_squareRoot(a) << std::endl;
			std::cout << "Sine: " << set_sine(a) << std::endl;
			std::cout << "Cosine: " << set_cosine(a) << std::endl;
			break;
		default:
			std::cout << "Invalid Input" << std::endl;
			break;
		}
	}
};