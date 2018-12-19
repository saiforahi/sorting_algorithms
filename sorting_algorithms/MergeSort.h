#pragma once
#include <vector>
using namespace std;
class MergeSort
{
public:
	MergeSort();
	~MergeSort();

	void MergeArray(int givenArray[],int arr_size);//function to sort an array
	vector<int> MergeVector(vector<int>);//function to sort a vector
};

