#include <stdio.h>

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


void selectionSort(int arr[], int i, int n)
{

	int min = i;
	for (int j = i + 1; j < n; j++)
	{
		if (arr[j] < arr[min])
			min = j;
	}


	swap(arr, min, i);

	if (i + 1 < n) {
		selectionSort(arr, i + 1, n);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 3, 5, 8, 4, 1, 9, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, 0, n);
	printArray(arr, n);

	return 0;
}

