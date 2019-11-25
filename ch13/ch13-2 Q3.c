#include <stdio.h>
int main(void)
{
	int i, total = 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4];
	for (i = 0 ; i < 5 ; i++)
	{
		total += *ptr;
		ptr--;
	}
	printf("%d", total);
	return 0;
}