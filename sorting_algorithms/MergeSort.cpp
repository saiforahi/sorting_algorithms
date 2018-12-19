#include "MergeSort.h"
#include <iostream>
using namespace std;

MergeSort::MergeSort()
{
}


MergeSort::~MergeSort()
{
}

void ArrayMerger(int arr[], int low, int mid, int high)
{
	int *temp = new int[high - low + 1];//temporary merger array
	int i = low, j = mid + 1;//i is for left-hand,j is for right-hand
	int k = 0;//k is for the temporary array
	while (i <= mid && j <= high)
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	//rest elements of left-half
	while (i <= mid)
		temp[k++] = arr[i++];
	//rest elements of right-half
	while (j <= high)
		temp[k++] = arr[j++];
	//copy the mergered temporary array to the original array
	for (k = 0, i = low; i <= high; ++i, ++k)
	{
		arr[i] = temp[k];
	}
	delete[]temp;
}

void ArrayMergeSortHelper(int arr[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		ArrayMergeSortHelper(arr, low, mid);
		ArrayMergeSortHelper(arr, mid + 1, high);
		ArrayMerger(arr, low, mid, high);
		for (int index = 0; index < high+1; index++)
		{
			cout << "\t" << arr[index] << "\t";
		}
	}
}

void MergeSort::MergeArray(int givenArray[], int arr_size)
{
	ArrayMergeSortHelper(givenArray, 0, arr_size - 1);
}
