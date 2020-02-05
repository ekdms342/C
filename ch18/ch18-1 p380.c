#include <stdio.h>
int main(void)
{
	int i;
	int arr[2][2] = { 
		{1, 2}, 
		{3, 4} 
	};
	int arr2[3][2] = { 
		{2, 3}, 
		{4, 5},
		{6, 7}
	};
	int arr3[4][2] = {
		{3, 4},
		{5, 6},
		{7, 8},
		{9, 10}
	};
	
	int(*ptr1)[2] = arr;
	printf("show 2,2arr \n");
	for (i = 0; i < 2; i++)
	{
		printf("%d %d\n", ptr1[i][0], ptr1[i][1]);
	}

	ptr1 = arr2;
	printf("show 3,2arr \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d %d\n", ptr1[i][0], ptr1[i][1]);
	}
	
	ptr1 = arr3;
	printf("show 4,2arr \n");
	for (i = 0; i < 4; i++)
	{
		printf("%d %d\n", ptr1[i][0], ptr1[i][1]);
	}

	return 0;
}