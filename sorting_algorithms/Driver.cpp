#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
using namespace std;

SelectionSort sorter1;
InsertionSort sorter2;//Four types of sorter
BubbleSort sorter3;//
MergeSort sorter4;

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
	for (int index = 0; index < v1.size(); index++)
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

void merge_sorting_array()
{
	int UnsortedArray[] = { 14,33,27,10,35,19,48,44 };
	cout << "\n\n\nunsorted array\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
	cout << "\n\nMerge sorting....";
	sorter4.MergeArray(UnsortedArray, (sizeof(UnsortedArray) / sizeof(*UnsortedArray)));
	cout << "\n\nAfter sorting..\n";
	for (int index = 0; index < (sizeof(UnsortedArray) / sizeof(*UnsortedArray)); ++index)
	{
		cout << "\t" << UnsortedArray[index];
	}
}

void merge_sorting_vector()
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
	for (int index = 0; index < v1.size(); index++)
	{
		cout << "\t" << v1[index];
	}
	cout << "\nMerge sorting in an unsorted vector" << endl;
	v1=sorter4.MergeVector(v1);
	cout << "\n\nAfter Sorting\n";
	for (int index = 0; index < v1.size(); ++index)
	{
		cout << "\t" << v1[index];
	}
}
int main()
{
	selection_sorting_array();//Selection sorting in an unsorted array
	selection_sorting_vector();//Selection sorting in an unsorted vector
	insertion_sorting_array();//insertion sorting in an unsorted array
	insertion_sorting_vector();//insertion sorting in an unsorted vector
	bubble_sorting_array();//Bubble sorting in an unsorted array
	bubble_sorting_vector();//Bubble sorting in an unsorted vector
	merge_sorting_array();//Merge sorting in an unsorted array
	merge_sorting_vector();//Merge sorting in an unsorted vector
	return 0;
}