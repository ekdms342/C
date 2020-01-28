#include <stdio.h>
int main(void)
{
	int h, l, w;
	double ave = 0;
	int arr[3][3][2] = 
	{
		{
			{70, 80},
			{94 , 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82},
		},
		{
			{98, 89},
			{99, 94},
			{91, 87}
		}
	};

	for (h = 0; h < 3; h++)
	{
		ave = 0;
		for (l = 0; l < 3; l++)
		{
			for (w = 0; w < 2; w++)
			{
				 ave += arr[h][l][w];
			}
		}
		if (h == 0)
		{
			printf("A학급의 평균:%g \n", ave / 6);
		}
		else if (h == 1)
		{
			printf("B학급의 평균:%g \n", ave / 6);
		}
		else
		{
			printf("C학급의 평균:%g \n", ave / 6);
		}	
	}
	
	return 0;
}