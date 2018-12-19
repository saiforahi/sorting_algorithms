#include "MergeSort.h"
#include <iostream>

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


vector<int> VectorMerger(vector<int> left, vector<int> right)
{
	vector<int> result;//temporary vector for merge sorting
	while (left.size() > 0 || right.size() > 0) {
		if (left.size() > 0 && right.size() > 0) {
			if ((int)left.front() <= (int)right.front()) {
				result.push_back((int)left.front());
				left.erase(left.begin());
			}
			else {
				result.push_back((int)right.front());
				right.erase(right.begin());
			}
		}
		else if ((int)left.size() > 0) {
			for (int i = 0; i < (int)left.size(); i++)
				result.push_back(left[i]);
			break;
		}
		else if ((int)right.size() > 0) {
			for (int i = 0; i < (int)right.size(); i++)
				result.push_back(right[i]);
			break;
		}
	}
	cout << "\n";
	for (int index = 0; index < result.size(); index++)
	{
		cout << "\t" << result[index];
	}
	return result;//returning partially or fully merged vector
}


vector<int> MergeSort::MergeVector(vector<int> givenVector)
{
	if (givenVector.size() <= 1)
		return givenVector;

	vector<int> left, right, result;//three temporary vectors, one is for left half, one is for right half
									//and another one is their result after sorting
	int middle = ((int)givenVector.size() + 1) / 2;
	for (int i = 0; i < middle; i++) {
		left.push_back(givenVector[i]);
	}
	for (int i = middle; i < (int)givenVector.size(); i++) {
		right.push_back(givenVector[i]);
	}
	left = MergeVector(left);
	right = MergeVector(right);
	result = VectorMerger(left, right);
	return result;
}
