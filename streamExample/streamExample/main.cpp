#include <stdio.h>
#include <iostream>

//namespace Vector2D
//{
//	int x;
//	int y;
//	void print()
//	{
//		printf("%d %d", x, y);
//	}
//}
struct Vector2D
{
	int x;
	int y;
	void print()
	{
		printf("%d %d", x, y);
	}
}

void main()
{
	Vector2D my_vector;
	//Vector2D:: x = 1;
	//Vector2D:: y = 2;
	//Vector2D::print();
	my_vector.x = 1;
	my_vector.y = 2;
	my_vector.print();
	//printf("This is C style!");
	//std::cout <<" This is C++ style" << std::endl;
}