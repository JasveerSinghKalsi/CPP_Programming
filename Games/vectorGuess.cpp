#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>

void print_vector(std::vector<int> vector)
{
	std::cout << "|";
	for (int i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i];
		if (i < (vector.size() - 1))
		{
			std::cout << "\t";
		}
	}
	std::cout << "|";
}

void play_game()
{
	int random = rand() % 100;
	std::cout << random << std::endl;
	std::vector<int> guesses;

	while (true)
	{
		int guess;
		std::cout << "Guess the number: ";
		std::cin >> guess;

		if (guess >= 0 && guess < 101)
		{
			guesses.push_back(guess);
			if (guess == random)
			{
				std::cout << "You Win! The number is " << random << std::endl;
				break;
			}
			else if (guess < random)
			{
				std::cout << "Too low\n";
				continue;
			}
			else if (guess > random)
			{
				std::cout << "Too high\n";
				continue;
			}
		}
		else
		{
			std::cout << "Invalid Input! Try again\n";
		}
	}
	std::cout << "It took you " << guesses.size() << " attempts to guess the correct number\n";
	std::cout << "Your guesses were: ";
	print_vector(guesses);
}

int main()
{
	srand(time(NULL));
	play_game();
	return 0;
}