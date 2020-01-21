#include <stdio.h>
void AO(int* arr, int num)
{
	int end = num - 1;
	int i ,safe;
	while (end != 0)
	{
		for (i = 0; i < end; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				safe = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = safe;
			}
		}
		end--;
	}
}
void showAO(int* arr)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main(void)
{
	int i;
	int arr[4] = { 0 };
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	AO(arr, sizeof(arr) / sizeof(int));
	showAO(arr);
	return 0;
 }