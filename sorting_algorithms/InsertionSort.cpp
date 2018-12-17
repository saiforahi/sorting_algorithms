#include "InsertionSort.h"
#include <iostream>
using namespace std;


InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}

void InsertionSort::ArraySorter(int arr[], int arr_size)
{
	if (arr_size > 1)
	{
		int size = arr_size;
		for (int index = 1; index < size; ++index)
		{
			int index2 = index - 1;
			int key = arr[index];
			while (index2 >= 0 && arr[index2] > key)
			{
				arr[index2 + 1] = arr[index2];
				--index2;
			}
			arr[index2 + 1] = key;
			cout << "\n";
			for (int index = 0; index < arr_size; ++index)
			{
				cout << "\t" << arr[index];
			}
		}
	}
}
