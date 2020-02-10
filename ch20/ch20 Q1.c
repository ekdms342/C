#include <stdio.h>
int main(viod)
{
	int i, j;
	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (j = 0; j < 4; j++)
	{
		for (i = 3; i >= 0; i--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 3; i >= 0; i--)
	{
		for (j = 3; j >= 0; j--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (j = 3; j >= 0; j--)
	{
		for (i = 0; i < 4; i++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;

 }