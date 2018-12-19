#pragma once
#include <vector>
using namespace std;
class SelectionSort
{
public:
	SelectionSort();
	~SelectionSort();

	void ArraySorter(int arr[], int arr_size);//function to sort an array
	void VectorSorter(vector<int>&);//function to sort a vector
};

