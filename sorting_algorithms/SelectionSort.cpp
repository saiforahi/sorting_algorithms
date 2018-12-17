#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{
}


SelectionSort::~SelectionSort()
{
}

inline void Swap(int &a, int &b)
{
	int k = a;
	a = b;
	b = k;
}
void SelectionSort::ArraySorter(int arr[], int arr_size)
{
	for (int index1 = 0; index1 < arr_size - 1; ++index1)
	{
		int min = index1;
		for (int index2 = index1 + 1; index2 < arr_size; ++index2)
		{
			if (arr[index2] < arr[min])
				min = index2;
		}
		Swap(arr[min], arr[index1]);
		cout << "\nstep "<< index1+1;
		for (int index3 = 0; index3 < arr_size; ++index3)
		{
			cout << "\t" << arr[index3];
		}
	}
}

void SelectionSort::VectorSorter(vector<int>& givenVector)
{
	for (int i = 0; i < givenVector.size() - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < givenVector.size(); ++j)
		{
			if (givenVector[j] < givenVector[min])
			{
				min = j;
			}
		}
		Swap(givenVector[min], givenVector[i]);
		cout << "\n";
		for (int index = 0; index < givenVector.size(); ++index)
		{
			cout << "\t" << givenVector[index];
		}
	}
}
