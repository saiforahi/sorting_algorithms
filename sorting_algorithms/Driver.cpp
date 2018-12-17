#include <iostream>
#include "SelectionSort.h"
using namespace std;

SelectionSort sorter1;

void selection_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "unsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nSelection sorting....";
	sorter1.ArraySorter(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
}
int main()
{
	selection_sorting_array();
	return 0;
}