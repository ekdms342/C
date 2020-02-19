#include <stdio.h>
int main(void)
{
	int i, j, num, snum, n1 = 1;
	int sero, garo, s = 0 , g = 0;
	int arr[100][100];
	printf("n X n, n입력:");
	scanf("%d", &num);
	
	snum = num;
	for (i = 1; i <= num; i++)
	{
		/**가로**/
		for (garo = snum; garo > 0; garo--)
		{
			arr[s][g] = n1;
			n1++;
			if (i % 2 != 0)
			{
				g++;
			}
			else
			{
				g--;
			}
		}
		if (i % 2 != 0)
		{
			g--;
			s++;
		}
		else
		{
			g++;
			s--;
		}
		/**세로**/
		for (sero = snum - 1; sero > 0; sero--)
		{
			arr[s][g] = n1;
			n1++;
			if (i % 2 != 0)
			{
				
				s++;
			}
			else
			{
				
				s--;
			}
		}
		if (i % 2 != 0)
		{
			s--;
			g--;
		}
		else
		{
			s++;
			g++;
		}
		snum--;
	}
	
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}