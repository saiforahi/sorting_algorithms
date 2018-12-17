#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
using namespace std;

SelectionSort sorter1;
InsertionSort sorter2;

void selection_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "\nunsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nSelection sorting....";
	sorter1.ArraySorter(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
}

void selection_sorting_vector()
{
	vector<int> v1;
	v1.push_back(14);
	v1.push_back(33);
	v1.push_back(27);
	v1.push_back(10);
	v1.push_back(35);
	v1.push_back(19);
	v1.push_back(48);
	v1.push_back(44);
	cout << "Sorting in an unsorted vector" << endl;
	sorter1.VectorSorter(v1);
}

void insertion_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "\nunsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nInsertion sorting in array....";
	sorter2.ArraySorter(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
}
int main()
{
	selection_sorting_array();
	selection_sorting_vector();
	insertion_sorting_array();
	return 0;
}