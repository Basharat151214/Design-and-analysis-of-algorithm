#include <iostream>
using namespace std;
void merge_sort(int list1[], int list2[], int size1, int* median1, int* median2)
{
	int size = size1 * 2;
	int* result = new int[size];
	int j = 0;
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if(list1[j] < list2[k] && j < (size / 2) && k < (size / 2) )
		{
			*(result+i) = list1[j];
			j++;
		}
		else if (list1[j] > list2[k] && k >= (size / 2) && j <= size / 2)
		{
			*(result+i) = list1[j];
			j++;
		}

		else if (list1[j] >list2[k] && j >= (size / 2) && k <= size / 2)
		{
			*(result+i) = list2[k];
			k++;
		}
		else
		{
			*(result+i) = list2[k];
			k++;
		} 
	}
	k = size / 2;
	j = k - 1;
	*median1 = result[j];
	*median2 = result[k];

}


int main()
{
	int list1[5] = {80, 85, 86, 87, 100};
	int list2[5] = {2, 60, 69, 70, 86};
	int result[10];
	int size = 5;
	int median1;
	int median2;
	merge_sort(list1, list2, size, &median1, &median2);
	cout<<endl<<"Median is : "<<median1<<" and "<<median2<<endl;
	return 0;
}

/*

		efficient algorithm for this typew of Problems


The efficient algorithm is Merge Sorting Algorithm
Recurrence Relation    T(n) = 2T(n/2) + n
Asymptotic notation    O(n*Log n)






*/
