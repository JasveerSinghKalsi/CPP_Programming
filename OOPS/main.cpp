#include <iostream> //For Inputs and Outputs
#include <vector>
#include <string>

class User
{
private:
	std::string status = "Gold";

public:
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
};

void print_vector(std::vector<User> user)
{
	std::cout << "|";
	for (int i = 0; i < user.size(); i++)
	{
		std::cout << user[i].first_name << user[i].last_name;
		if (i < (user.size() - 1))
		{
			std::cout << "\t";
		}
	}
	std::cout << "|\n";
}

int add_user(std::vector<User> &users, User user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
		{
			return i;
		}
		users.push_back(user);
		return users.size() - 1;
	}
	
}

int main()
{
	std::vector<User> users;
	User user1, user2, user3, user4;

	user1.first_name = "Caleb";
	user1.last_name = "Curry";

	user2.first_name = "Jake";
	user2.last_name = "John";

	user3.first_name = "Sally";
	user3.last_name = "Sane";

	user4.first_name = "Caleb";
	user4.last_name = "Curry";

	add_user(users, user1);
	add_user(users, user2);
	add_user(users, user3);
	add_user(users, user4);

	print_vector(users);

	return 0;
}