#include <stdio.h>
#define SizeIntArray(arr) sizeof(arr)/sizeof(int)


int factorial(unsigned int i)
{
	if (i <= 1) return 1;
	return i * factorial(i - 1);
}

void printInt(unsigned int number, const int base)
{
	char* conversion = "0123456789ABCDEF";
	char digit = number % base;
	if (number /= base) printInt(number, base);
	printf("%c", conversion[digit]);
}


int main()
{
	printf("ex1 펙토리얼 : %d \n", factorial(7));

	int arr[] = { 6, 10, 15, 18, 25, 64, 67, 135 };
	int bases[] = { 2, 8, 10, 16 };
	printf("#### ex2 진수 변환 ####\n");
	for (int i = 0; i < SizeIntArray(arr); i++)
	{
		printf("--- 현재 수 : %d --- \n", arr[i]);
		for (int j = 0; j < SizeIntArray(bases); j++)
		{
			printf("%d의 %d 진수 표현 : ", arr[i], bases[j]);
			printInt(arr[i], bases[j]);
			printf("\n");
		}
		printf("\n\n");
	}
}