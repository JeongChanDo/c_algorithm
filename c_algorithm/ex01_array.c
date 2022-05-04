#include <stdio.h>

int SumArray(int arr[], int size)
{
	int total = 0;
	int index = 0;
	for (index = 0; index < size; index++) total = total + arr[index];
	return total;
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	printf("ex1 ¹è¿­ ÇÕ : %d \n", SumArray(arr1, 5));
}