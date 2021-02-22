#include<iostream>

struct Vector2D
{
	float x;
	float y;
};

void printVector2D(Vector2D vec)
{
	std::cout << "(" << vec.x << "," << vec.y << ")" << std::endl;
}

int main()
{
	Vector2D vec = { 1, 4 };
	printVector2D(vec);
	
	return 0;
}