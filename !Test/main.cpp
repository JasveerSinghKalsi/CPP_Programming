#include <iostream> //For Inputs and Outputs
double pow(int base, int pow)
{
	int pow_num = 1;
	for (int i = 0; i < pow; i++)
	{
		pow_num *= base;
	}
	return pow_num;	
}
int main()
{
	std::cout << pow(3,2) << std::endl;
	return 0;
}