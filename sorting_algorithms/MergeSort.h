#pragma once
#include <vector>
class MergeSort
{
public:
	MergeSort();
	~MergeSort();

	void MergeArray(int givenArray[],int arr_size);
	void MergeVector(std::vector<int>&);
};

