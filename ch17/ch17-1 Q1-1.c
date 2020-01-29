#include <stdio.h>
void MinMax(int* arr, int** mindp, int** maxdp)
{
	int i;
	*mindp = &arr[0];
	*maxdp = &arr[0];

	for (i = 1; i < 5; i++)
	{
		if (*(*mindp) > arr[i])
		{
			*mindp = &arr[i];
		}
		if (*(*maxdp) < arr[i])
		{
			*maxdp = &arr[i];
		}
	}
}
int main(void)
{
	int arr[5] = { 2, 4, 7, 1, 6 };
	int* minptr;
	int* maxptr;
	MinMax(arr, &minptr, &maxptr);
	printf("%d %d", *minptr, *maxptr);
}