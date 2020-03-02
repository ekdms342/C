#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0 , i = 0 , j = 0;
	int* arr = (int*)malloc(sizeof(int) * 5);
	while (num != -1)
	{
		scanf("%d", &num);
		getchar();
		*(arr + i) = num;
		i++;
		if (i > 4 + j)
		{
			arr = (int*)realloc(arr, sizeof(int) * 3);
			j += 3;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d", arr[i]);
	}
	free(arr);
	return 0;
}