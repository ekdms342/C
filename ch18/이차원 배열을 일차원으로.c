#include <stdio.h>
int* TwotoOne(int(*darr)[4], int* index)
{
	static int arr[12] = { 0 };// �Լ��� ����� ����� ���� �� ������ϱ� static ������ ��� �Ѵ�!! 
	int i, j, num = 0;

	if (index[0] == 0)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				arr[num] = darr[i][j];
				num++;
			}
		}
	}
	else
	{
		for (j = 0; j < 4; j++)
		{
			for (i = 0; i < 3; i++)
			{
				arr[num] = darr[i][j];
				num++;
			}
		}
	}


	return arr;
}

int main(void)
{
	int i;
	int darr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int index[2] = { 0,1 };
	int * larr = TwotoOne(darr, index);
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *(larr+i));
	}

	return 0;
}
