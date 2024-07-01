#include <iostream> //For Inputs and Outputs

class BankAccount
{
private:
	int principal;
	int years;
	float interestRate;
	float simpleInterest;
public:
	void show()
	{
		std::cout << "Principal: " << principal << std::endl;
		std::cout << "Years: " << years << std::endl;
		std::cout << "Interest Rate: " << interestRate << std::endl;
		std::cout << "Simple Interest: " << simpleInterest << std::endl;
	}
	BankAccount(){};
	BankAccount(int p, int y, float r)
	{
		principal = p;
		years = y;
		interestRate = r;
		simpleInterest = principal;
		for (int i = 0; i < years; i++)
		{
			simpleInterest *= (1 + interestRate);
		}
	}
	BankAccount(int p, int y, int r)
	{
		principal = p;
		years = y;
		interestRate = ((float)r)/100;
		simpleInterest = principal;
		for (int i = 0; i < years; i++)
		{
			simpleInterest *= (1 + (interestRate));
		}
	}
	~BankAccount(){};
};

int main()
{
	BankAccount account[100];
	int p, y;
	float r;
	int R;

	std::cout << "Enter the principal, years and interest rate: ";
	std::cin >> p >> y >> r;
	account[0] = BankAccount(p, y, r);
	account[0].show();

	std::cout << "Enter the principal, years and interest rate: ";
	std::cin >> p >> y >> R;
	account[1] = BankAccount(p, y, R);
	account[1].show();
	
	return 0;
}