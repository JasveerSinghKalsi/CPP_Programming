#include <iostream> //For Inputs and Outputs
#include <cmath>    //For Mathematics Functions

class Point
{
private:
	int x, y;
public:
	Point(void)
	{
		x = 0;
		y = 0;
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void displayPoint(void)
	{
		std::cout << "Point (" << x << ", " << y << ")" << std::endl;
	}
	friend void distanceBetweenPoints(Point, Point);
};

void distanceBetweenPoints(Point p1, Point p2)
{
	int x = p2.x - p1.x;
	int y = p2.y - p1.y;
	double distance = sqrt(pow(x, 2) + pow(y, 2));
	std::cout << "Distance Between Points: " << distance << std::endl;
}

int main()
{
	Point p1(2, 3), p2(5, 7);
	p1.displayPoint();
	p2.displayPoint();
	distanceBetweenPoints(p1, p2);
	
	return 0;
}