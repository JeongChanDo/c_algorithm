#include <stdio.h>

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

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	printf("ex1 �迭 �� : %d \n", SumArray(arr1, 5));
	int arr2[] = { 43, 23, 64, 12 };
	printf("ex2 ���� Ž�� (ã�� ���� �ε���) : %d \n", SequentialSearch(arr2, 4, 64));


}