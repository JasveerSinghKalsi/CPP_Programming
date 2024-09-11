#include <iostream> //For Inputs and Outputs
#include <string>	//For Strings

class Employee
{
private:
	int id;
	float salary;
	std::string name;

public:
	static int employeeCount;

	int getId()
	{
		return id;
	}
	float getSalary()
	{
		return salary;
	}
	std::string getName()
	{
		return name;
	}
	void setName(std::string name)
	{
		this->name = name;
	}
	void setSalary(float salary)
	{
		this->salary = salary;
	}
	void getDetails()
	{
		std::cout << "ID: " << getId() << std::endl;
		std::cout << "Name: " << getName() << std::endl;
		std::cout << "Salary: Rs." << getSalary() << std::endl;
	}
	Employee()
	{
		employeeCount++;
		id = employeeCount;
		salary = 15000;
	}
	~Employee()
	{
		employeeCount--;
	}
};
int Employee::employeeCount = 1000;

class Programmer : public Employee
{
private:
	std::string language;

public:
	void setLanguage(std::string language)
	{
		this->language = language;
	}
	void getDetails()
	{
		Employee::getDetails();
		std::cout << "Language: " << language << std::endl;
	}
	Programmer()
	{
		Employee();
		setSalary(25000);
	}
	~Programmer() {}
};

int main()
{
	std::string name;
	Employee employee1;
	std::cout << "Enter Employee Name: ";
	std::getline(std::cin, name);
	employee1.setName(name);

	employee1.getDetails();

	Programmer programmer1;
	std::string language;
	std::cout << "Enter Programmer Name: ";
	std::getline(std::cin, name);
	programmer1.setName(name);
	std::cout << "Enter Language: ";
	std::getline(std::cin, language);
	programmer1.setLanguage(language);
	programmer1.getDetails();
	return 0;
}

