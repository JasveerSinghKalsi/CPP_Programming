#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

void print_array(int arr[], int size)
{
	std::cout << "|";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
		if (i < (size - 1))
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
	int guesses[100];
	int guess_count = 0;

	while (true)
	{
		int guess;
		std::cout << "Guess the number: ";
		std::cin >> guess;

		if (guess >= 0 && guess < 101)
		{
			guesses[guess_count++] = guess;
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
	std::cout << "It took you " << guess_count << " attempts to guess the correct number\n";
	std::cout << "Your guesses were: ";
	print_array(guesses, guess_count);
}

int main()
{
	srand(time(NULL));
	play_game();
	return 0;
}