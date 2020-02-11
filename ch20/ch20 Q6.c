#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int* arr)
{
	int i;
	for (i = 0; i < 3 ; i++)
	{
		printf("%d", arr[i]);
	}
}

int check(int* arr)
{
	int i , j;
	for (j = 0; j < 3; j++)
	{
		for (i = j + 1; i < 3; i++)
		{
			if (arr[j] == arr[i])
			{
				return 1;
			}
		}
	}	
}
int main(void)
{
	int comarr[3] = { 0 };
	int arr[3] = { 0 };
	int strikearr[3] = { 0 };
	int i , num = 1 , j, arri;
	int strike = 0, ball = 0;

	srand((int)time(NULL));
	for (i = 0; i < 3; i++)
	{
		comarr[i] = rand() % 10;
	}
	
	while (check(comarr) == 1)
	{
		for (i = 0; i < 3; i++)
		{
			comarr[i] = rand() % 10;
		}
	}

	printf("start game \n");
	while (1)
	{
		strike = 0, ball = 0;
		
		printf("3개의 숫자 선택 :");
		scanf("%d %d %d",&arr[0], &arr[1], &arr[2]);
		num++;

		for (i = 0; i < 3; i++)
		{
			for (arri = 0; arri < 3; arri++)
			{
				if (comarr[i] == arr[arri])
				{
					if (i == arri)
					{
						strike++;
					}
					else
					{
						ball++;
					}
				}
			}
		}
		if (strike == 3)
		{
			break;
		}
		printf("%d번째 도전 결과 :%d strike , %d ball \n",num , strike, ball);
	}	
	return 0;
}