#include <stdio.h>
int main(void)
{
	int i, j;
	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	int B[4][2] = {
		{A[0][0],A[1][0]},
		{A[0][1],A[1][1]},
		{A[0][2],A[1][2]},
		{A[0][3],A[1][3]},
	};

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", A[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
