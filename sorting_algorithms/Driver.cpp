#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
using namespace std;

SelectionSort sorter1;
InsertionSort sorter2;
BubbleSort sorter3;

void selection_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "\n\n\nunsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nSelection sorting....";
	sorter1.ArraySorter(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
	cout << "\n\nAfter sorting..\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
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
	cout << "\n\n\nunsorted vector\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
	cout << "\nSelection sorting in an unsorted vector" << endl;
	sorter1.VectorSorter(v1);
	cout << "\n\nAfter Sorting\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
}

void insertion_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "\n\n\nunsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nInsertion sorting in array....";
	sorter2.ArraySorter(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
	cout << "\n\nAfter Sorting\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
}

void insertion_sorting_vector()
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
	cout << "\n\n\nunsorted vector\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
	cout << "\nInsertion sorting in an unsorted vector" << endl;
	sorter2.VectorSorter(v1);
	cout << "\n\nAfter Sorting\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
}

void bubble_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "\n\n\nunsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nBubble sorting....";
	sorter3.ArraySorter(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
	cout << "\n\nAfter sorting..\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
}

void bubble_sorting_vector()
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
	cout << "\n\n\nunsorted vector\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
	cout << "\nBubble sorting in an unsorted vector" << endl;
	sorter3.VectorSorter(v1);
	cout << "\n\nAfter Sorting\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
}
int main()
{
	selection_sorting_array();
	selection_sorting_vector();
	insertion_sorting_array();
	insertion_sorting_vector();
	bubble_sorting_array();
	bubble_sorting_vector();
	return 0;
}