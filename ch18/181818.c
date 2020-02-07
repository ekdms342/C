#include <stdio.h>
int* TwotoOne(int(*darr)[3][4], int* index)
{
	static int arr[24] = { 0 };// 함수를 벗어나면 저장된 값이 다 사라지니까 static 변수를 써야 한다!! 
	int i, j, k,  num = 0;
	if (index[0] == 0)
	{
		if (index[1] == 1)
		{
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					for (k = 0; k < 2; k++)
					{
						arr[num] = darr[k][i][j];
						num++;

					}
				}
			}
		}
		else
		{
			for (i = 0; i < 3; i++)
			{
				for (k = 0; k < 2; k++)
				{
					for (j = 0; j < 4; j++)
					{
						arr[num] = darr[k][i][j];
						num++;

					}
				}
			}
		}
	}
	else if (index[0] == 1)
	{
		if (index[1] == 0)
		{
			for (j = 0; j < 4; j++)
			{
				for (i = 0; i < 3; i++)
				{
					for (k = 0; k < 2; k++)
					{
						arr[num] = darr[k][i][j];
						num++;

					}
				}
			}
		}
		else
		{
			for (j = 0; j < 4; j++)
			{
				for  (k = 0; k < 2; k++)
				{
					for(i = 0; i < 3; i++)
					{
						arr[num] = darr[k][i][j];
						num++;

					}
				}
			}
		}
	}
	else if (index[0] == 2)
	{
		if (index[1] == 1)
		{
			for(k = 0; k < 2; k++) 
			{
				for (j = 0; j < 4; j++)
				{
					for (i = 0; i < 3; i++)
					{
						arr[num] = darr[k][i][j];
						num++;

					}
				}
			}
		}
		else
		{
			for (k = 0; k < 2; k++)
			{
				for (i = 0; i < 3; i++)
				{
					for  (j = 0; j < 4; j++)
					{
						arr[num] = darr[k][i][j];
						num++;

					}
				}
			}
		}
	}

	return arr;
}

int main(void)
{
	int i;
	int darr[2][3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 };
	int index[3] = { 0,1,2 };
	int * larr = TwotoOne(darr, index);
	for (i = 0; i < 24; i++)
	{
		printf("%d ", *(larr+i));
	}

	return 0;
}
