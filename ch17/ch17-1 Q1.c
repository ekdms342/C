#include <stdio.h>
void MinMax(int* arr, int** mindp, int** maxdp)
{
	int i;
	*mindp = &arr[0];
	*maxdp = &arr[0];

	int min = arr[0];
	int max = arr[0];

	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			*mindp = &arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
			*maxdp = &arr[i];
		}
	}

}
int main(void)
{
	int arr[5] = { 2, 4, 7, 5, 6 };
	int* minptr;
	int* maxptr;
	MinMax(arr, &minptr, &maxptr);
	printf("%d %d", *minptr, *maxptr);
}