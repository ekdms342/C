#include <stdio.h>
void show(int(*arr)[4], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int sum(int(*arr)[4], int len)
{
	int i, j, sum = 0;
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
	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5};
	show(arr, sizeof(arr) / sizeof(arr[0]));
	printf("\n");
	show(arr2, sizeof(arr2) / sizeof(arr[0]));
	printf("\n");
	printf("%d \n" , sum(arr, sizeof(arr) / sizeof(arr[0])));
	printf("%d \n" ,sum(arr2, sizeof(arr2) / sizeof(arr[0])));

	return 0;
}