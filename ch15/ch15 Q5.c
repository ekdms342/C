#include <stdio.h>
void DO(int* arr, int num)
{
	int end = num - 1;
	int i ,safe;
	while (end != 0)
	{
		for (i = 0; i < end; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				safe = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = safe;
			}
		}
		end--;
	}
}
void showDO(int* arr)
{
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main(void)
{
	int i;
	int arr[7] = { 0 };
	for (i = 0; i < 7; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	DO(arr, sizeof(arr) / sizeof(int));
	showDO(arr);
	return 0;
 }