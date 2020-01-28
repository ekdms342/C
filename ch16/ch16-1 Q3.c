#include <stdio.h>
int main(void)
{
	int i, j;
	int arr[5][5] = {
		{5, 4, 6, 5},
		{3, 6, 9, 3},
		{4, 8, 2, 7},
		{3, 8, 9, 7}
	};
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][4] += arr[i][j];
		}
	}
	
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 4; i++)
		{
			arr[4][j] += arr[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
