#include <iostream>
#include "bubble_sort.h"
#include "print_func.h"

int main()
{

	int test_array[] = { 1,10,12,4,3,8,15,20,11,9 };
	int size = 10;

	std::cout << "Array before sorting: "; 
	print_func(test_array, size);

	bubble_sort(test_array,size);

	std::cout << "Array after sorting: ";
	print_func(test_array, size);

	std::cout << "OK\n";

	return 0;
}
