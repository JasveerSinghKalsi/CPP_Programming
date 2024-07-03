#include <iostream> //For Inputs and Outputs
#include <cmath>	//For Mathematics Functions

class SimpleCalculator
{
protected:
	double sum, difference, product, quotient;
};

class ScientificCalculator
{
protected:
	double power, squareRoot, sine, cosine;
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
	void add(double a, double b)
	{
		sum = a + b;
		std::cout << "Sum: " << sum << std::endl;
	}
	void subtract(double a, double b)
	{
		difference = a - b;
		std::cout << "Difference: " << difference << std::endl;
	}
	void multiply(double a, double b)
	{
		product = a * b;
		std::cout << "Product: " << product << std::endl;
	}
	void divide(double a, double b)
	{
		quotient = a / b;
		std::cout << "Quotient: " << quotient << std::endl;
	}
	void powerOf(double a, double b)
	{
		power = pow(a, b);
		std::cout << "Power: " << power << std::endl;
	}
	void squareRootOf(double a)
	{
		squareRoot = sqrt(a);
		std::cout << "Square Root: " << squareRoot << std::endl;
	}
	void sineOf(double a)
	{
		sine = sin(a);
		std::cout << "Sine: " << sine << std::endl;
	}
	void cosineOf(double a)
	{
		cosine = cos(a);
		std::cout << "Cosine: " << cosine << std::endl;
	}
};