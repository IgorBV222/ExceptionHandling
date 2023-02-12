#include <iostream>
#include "MyException.h"
//#include<new>
//#include <conio.h>

void foo(int rows, int cols)
{
	int** new_data = new int* [rows];
	for (int i = 0; i < rows; i++) new_data[i] = new int[cols];
}

int main() {

	std::cout << "Task 1\n";

	try
	{
		foo(1000000000, 1000000000);
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
	}


	std::cout << "==========================\n";
	std::cout << "Task 2\n";
	
	try {
		func(6, 0);
	}
	catch (const MyException& ex) {
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}