#include <iostream> //For Inputs and Outputs

class Position
{
public:
	int x = 10;
	int y = 20;
	Position operator + (Position pos)
	{
		Position new_pos;
		new_pos.x = x + pos.x;
		new_pos.y = y + pos.y;
		return new_pos;
	}
	bool operator == (Position pos)
	{
		if (x == pos.x && y == pos.y)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	Position pos1, pos2;
	Position pos3 = pos1 + pos2;
	std::cout << pos1.x << " " << pos1.y << std::endl;
	std::cout << pos2.x << " " << pos2.y << std::endl;
	std::cout << pos3.x << " " << pos3.y << std::endl;

	if (pos1 == pos2)
	{
		std::cout << "The pos a & b are same\n";
	}
	
	return 0;
}