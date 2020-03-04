#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* arr = (int*)malloc(sizeof(int) * 5);
	int num;
	int i = 0;
	int j = 5;
	while (1)
	{
		if (i >= j)
		{
			j += 3;
			arr = (int*)realloc(arr,sizeof(int) * j);
			
		}
		scanf("%d", &num);
		if (num == -1)
		{
			break;
		}
		arr[i] = num;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		printf("%d", arr[j]);
	}
	free(arr);
	return 0;
}
	