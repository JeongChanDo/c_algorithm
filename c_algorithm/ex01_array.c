#include <stdio.h>
#define SizeIntArray(arr) sizeof(arr)/sizeof(int)


int SumArray(int arr[], int size)
{
	int total = 0;
	int index = 0;
	for (index = 0; index < size; index++) total = total + arr[index];
	return total;
}

int SequentialSearch(int arr[], int size, int value)
{
	int i = 0;
	for (i = 0; i < size; i++) if (value == arr[i]) return i;
	return -1;
}


int BinarySearch(int arr[], int size, int value)
{
	int low = 0, mid;
	int high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (arr[mid] == value) return mid;
		else if (arr[mid] < value) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	printf("ex1 배열 합 : %d \n", SumArray(arr1, 5));
	int arr2[] = { 43, 23, 64, 12 };
	printf("ex2 순차 탐색 (찾는 값의 인덱스) : %d \n", SequentialSearch(arr2, 4, 64));
	int arr3[] = { 12, 34, 35, 36, 46, 54, 66, 76, 130, 254, 256, 267, 414, 756, 1530, 2467};
	printf("* 배열의 크기 : %d \n", sizeof(arr3)/sizeof(int));
	printf("* 배열의 크기 2: %d \n", SizeIntArray(arr3));

	printf("ex3 이진 검색 : %d \n", BinarySearch(arr3, SizeIntArray(arr3), 54));
	printf("ex3 이진 검색 : %d \n", BinarySearch(arr3, SizeIntArray(arr3), 66));



}