#include <iostream> //For Inputs and Outputs
#include <array> //For STL Arrays
#include <cstdlib> //For Dynamic Memory, Random Number
#include <ctime> //For Date and Time

void print_array(std::array<int, 101> array, int size)
{
	std::cout << "|";
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i];
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
	std::array<int, 101> guesses;
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
                std::cout << "Too Low\n";
				if ((random - guesses[guess_count]) < (random - guesses[guess_count - 1]))
                {
                    std::cout << "You are getting close\n";
                }
                
				continue;
			}
			else if (guess > random)
			{
				std::cout << "Too high\n";
                if ((guesses[guess_count] - random) < (guesses[guess_count - 1] - random))
                {
                    std::cout << "You are getting close\n";
                }
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
