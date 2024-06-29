#include <iostream>
#include <string>
#include "user.h"

int User::get_user_count()
{
	return User::user_count;
}

std::string User::get_status()
{
	return User::status;
}
void User::set_status(std::string status)
{
	if (status == "Gold" || status == "Silver" || status == "Bronze")
	{
		this->status = status;
	}
	else
	{
		this->status = "No status";
	}
}

User::User()
{
	std::cout << "User created" << std::endl;
	User::user_count++;
}

User::User(std::string first_name, std::string last_name, std::string status)
{
	this->User::first_name = first_name;
	this->User::last_name = last_name;
	this->User::status = status;
	User::user_count++;
}
User::~User()
{
	User::user_count--;
}

void User::output()
{
	std::cout << "I am a user" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const User user);
std::istream &operator>>(std::istream &input, User &user);

int User::user_count = 0;

std::ostream &operator<<(std::ostream &output, const User user)
{
	output << "First name: " << user.first_name << std::endl;
	output << "Last name: " << user.last_name << std::endl;
	output << "Status: " << user.status;

	return output;
}

std::istream &operator>>(std::istream &input, User &user)
{
	input >> user.first_name >> user.last_name >> user.status;
	return input;
}
