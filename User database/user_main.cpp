#include <iostream>
#include <string>
#include <vector>
#include "user.h"
#include "teacher.h"

int main()
{
	// User user;
	// std::cout << "Enter user details: ";
	// std::cin >> user;
	// user.first_name = "Caleb";
	// user.last_name = "Curry";
	// user.set_status("Gold");
	// std::cout << user << std::endl;

	Teacher teacher;
	User &user = teacher;
	user.output();
	return 0;
}