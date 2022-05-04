#include <stdio.h>
#include <time.h>
#define SizeIntArray(arr) sizeof(arr)/sizeof(int)
#define PrintTime() printf("���� �ð� : %f \n", (double)(end - start));

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


// ���������� ���Ʈ ���� ������� Ȯ�� �ð� ���⵵ O(n^2)
int SmallestPositiveMissingNumber(int arr[], int size)
{
	int found;
	for (int i = 1; i < size + 1; i++)
	{
		found = 0;
		for (int j = 0; j < size; j++)
		{
			if (arr[j] == i)
			{
				found = 1;
				break;
			}
		}
		if (found == 0) return i;
	}
	return -1;
}

int main()
{
	clock_t start, end;

	int arr1[] = {1, 2, 3, 4, 5};
	printf("ex1 �迭 �� : %d \n", SumArray(arr1, 5));
	int arr2[] = { 43, 23, 64, 12 };
	printf("ex2 ���� Ž�� (ã�� ���� �ε���) : %d \n", SequentialSearch(arr2, 4, 64));
	int arr3[] = { 12, 34, 35, 36, 46, 54, 66, 76, 130, 254, 256, 267, 414, 756, 1530, 2467};
	printf("* �迭�� ũ�� : %d \n", sizeof(arr3)/sizeof(int));
	printf("* �迭�� ũ�� 2: %d \n", SizeIntArray(arr3));

	printf("ex3 ���� �˻� : %d \n", BinarySearch(arr3, SizeIntArray(arr3), 54));
	printf("ex3 ���� �˻� : %d \n", BinarySearch(arr3, SizeIntArray(arr3), 66));

	

	int arr4[2341];
	for (int i = 0; i < SizeIntArray(arr4); i++)
	{
		if (i == 1975) continue;
		arr4[i] = i;
	}
	
	start = clock();
	printf("ex4 ������ ���� ���� ��� - �η�Ʈ����: %d \n ", SmallestPositiveMissingNumber(arr4, SizeIntArray(arr4)));
	end = clock();
	PrintTime();


}