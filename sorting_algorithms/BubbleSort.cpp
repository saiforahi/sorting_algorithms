#include "BubbleSort.h"
#include <iostream>
using namespace std;


BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}

void BubbleSort::ArraySorter(int arr[], int size)
{
	for (int index = 0; index < size; index++)
	{
		for (int index2 = 0; index2 < size - index - 1; index2++)
		{
			if (arr[index2] > arr[index2 + 1])
			{
				int temp = arr[index2];
				arr[index2] = arr[index2 + 1];
				arr[index2 + 1] = temp;
			}
		}
		cout << "\n";
		for (int index = 0; index < size; index++)
		{
			cout << "\t" << arr[index];
		}
	}
}

void BubbleSort::VectorSorter(vector<int>& givenVector)
{
	for (int index = 0; index < givenVector.size(); index++)
	{
		for (int index2 = 0; index2 < givenVector.size() - index - 1; index2++)
		{
			if (givenVector[index2] > givenVector[index2 + 1])
			{
				int temp = givenVector[index2];
				givenVector[index2] = givenVector[index2 + 1];
				givenVector[index2 + 1] = temp;
			}
		}
		//printing updated vector
		cout << "\n";
		for (int index = 0; index < givenVector.size(); index++)
		{
			cout << "\t" << givenVector[index];
		}
	}
}
