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
		cout << "\n";
		for (int index = 0; index < high+1; index++)
		{
			cout << "\t" << arr[index] ;
		}
	}
}

void MergeSort::MergeArray(int givenArray[], int arr_size)
{
	ArrayMergeSortHelper(givenArray, 0, arr_size - 1);
}


void VectorMerger(vector<int> givenVector, int low, int mid, int high)
{
	vector<int>temp;//temporary merger vector
	int i = low, j = mid + 1;//i is for left-hand,j is for right-hand
	int k = 0;//k is for the temporary vector
	while (i <= mid && j <= high)
	{
		if (givenVector[i] <= givenVector[j])
			temp.push_back(givenVector[i++]);
		else
			temp.push_back(givenVector[j++]);
	}
	//rest elements of left-half
	while (i <= mid)
		temp[k++] = givenVector[i++];
	//rest elements of right-half
	while (j <= high)
		temp[k++] = givenVector[j++];
	//copy the mergered temporary array to the original vector
	for (k = 0, i = low; i <= high; ++i, ++k)
	{
		givenVector[i] = temp[k];
	}
}


void MergeSort::MergeVector(std::vector<int>& givenVector)
{
	VectorMergeSortHelper(givenVector,0,givenVector.size()-1);
}
