#include <iostream>
#include <string>
#include "user.h"

int main()
{
	User user;
	std::cin >> user;
	// user.first_name = "Caleb";
	// user.last_name = "Curry";
	// user.set_status("Gold");
	std::cout << user << std::endl;
	return 0;
}