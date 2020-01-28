#include <stdio.h>
int main(void)
{
	int i, j;
	int arr[3][9];
	for (i = 2; i < 5; i++)
	{
		for (j = 1; j < 10; j++)
		{
			arr[i - 2][j - 1] = i * j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
