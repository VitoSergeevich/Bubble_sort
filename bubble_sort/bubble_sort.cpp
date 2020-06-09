#include "bubble_sort.h"


	void bubble_sort(int arr[], int size)
	{
		int temp = 0;

		for (int i = 0; i < 10; ++i)
		{
			for (int j = 1; j < 10 - i; ++j)
			{
				if (arr[j - 1] > arr[j])
				{
					temp = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = temp;
				}
			}
		}


	};



