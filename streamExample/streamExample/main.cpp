#include <stdio.h>
#include <iostream>
#include <fstream>

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
};

//class Vector2D
//{
//public:
//	int x;
//	int y;
//	void print()
//	{
//		printf("%d %d", x, y);
//	}
//};

std::ostream &operator << (std::ostream &stream, Vector2D obj) 
{
	stream << obj.x << "" << obj.y << std::endl;
	return stream;
}

void main()
{
	//struct Vector2D
	Vector2D my_vector;
	my_vector.x = 1;
	my_vector.y = 2;
	my_vector.print();
	
	//c style
	//FILE *of = fopen("cstyle.txt","w");
	//fprintf(of, "%d %d", my_vector.x, my_vector.y);
	//fclose(of);
	
	//namespace Vector2D
	//Vector2D:: x = 1;
	//Vector2D:: y = 2;
	//Vector2D::print();

	//printf("This is C style!");
	//std::cout <<" This is C++ style" << std::endl;

	/*
	using namespace std;
	std::cout << my_vector.x <<" This is C++ style"<< my_vector.y << std::endl;
	*/
	std::cout << my_vector << std::endl;

	std::ofstream ofile("cppstyle.txt");
	ofile << my_vector << std::endl;

}