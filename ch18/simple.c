#include <stdio.h>
void show(int(*arr)[4],int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
}
int sum(int (*arr)[4], int len)
{
	int i, j , sum = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int main(void)
{
	int arr[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	show(arr, sizeof(arr) / sizeof(int));
	show(arr2, sizeof(arr2) / sizeof(int));
	sum(arr, sizeof(arr) / sizeof(int));
	sum(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}