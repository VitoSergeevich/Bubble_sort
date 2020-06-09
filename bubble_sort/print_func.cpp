#include "print_func.h"
#include <iostream>



void print_func(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << ' ';
	}

	std::cout << "\n";
}