#pragma once
#include <vector>
using namespace std;
class MergeSort
{
public:
	MergeSort();
	~MergeSort();

	void MergeArray(int givenArray[],int arr_size);
	vector<int> MergeVector(std::vector<int>);
};

