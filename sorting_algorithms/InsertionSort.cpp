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

void InsertionSort::VectorSorter(vector<int>& givenVector)
{
	if (givenVector.size() > 1)
	{
		for (int index = 1; index < givenVector.size(); ++index)
		{
			int index2 = index - 1;
			int key = givenVector[index];
			while (index2 >= 0 && givenVector[index2] > key)
			{
				givenVector[index2 + 1] = givenVector[index2];
				--index2;
			}
			givenVector[index2 + 1] = key;
			cout << "\n";
			for (int index = 0; index < givenVector.size(); ++index)
			{
				cout << "\t" << givenVector[index];
			}
		}
	}
}
