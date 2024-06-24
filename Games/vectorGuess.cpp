#include <iostream> //For Inputs and Outputs
#include <fstream>	//For File Functions
#include <string>	//For Strings and Arrays
#include <vector>	//For Vectors
#include <cstdlib>	//For Dynamic Memory, Random Number
#include <ctime>	//For Date and Time

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
	std::cout << "|\n";
}

void save_score(int count)
{
	std::ifstream input("Best_Score.txt");
	if (!input.is_open())
	{
		std::cout << "Error 404: Best score Found\n";
		std::cout << ".....Creating new best score\n";
		std::ofstream output("Best_Score.txt");
		output << count;
		std::cout << "New best score: " << count;
		return;
	}

	int best_score;
	input >> best_score;

	std::ofstream output("Best_Score.txt");
	if (!output.is_open())
	{
		std::cout << "Error 404: Not Found\n";
		return;
	}
	if (count < best_score)
	{
		output << count;
		std::cout << "New best score: " << count;
	}
	else
	{
		output << best_score;
		std::cout << "Best score not changed.....\n";
		std::cout << "Best score: " << best_score;
	}
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
				std::cout << "Too Low\n";
				if ((random - guesses[guesses.size() - 1]) < (random - guesses[guesses.size() - 2]))
				{
					std::cout << "You are getting close\n";
				}

				continue;
			}
			else if (guess > random)
			{
				std::cout << "Too high\n";
				if ((guesses[guesses.size() - 1] - random) < (guesses[guesses.size() - 2] - random))
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
	std::cout << "It took you " << guesses.size() << " attempts to guess the correct number\n";
	std::cout << "Your guesses were: ";
	print_vector(guesses);
	save_score(guesses.size());
}

int main()
{
	srand(time(NULL));
	play_game();
	return 0;
}