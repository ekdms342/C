#include <stdio.h>
int main(void)
{
	int arr[3] = { 15, 25, 35 };
	int* prt = &arr[0];
	printf("%d %d \n", prt[0], arr[0]);
	printf("%d %d \n", prt[1], arr[1]);
	printf("%d %d \n", prt[2], arr[2]);
	printf("%d %d \n", *prt, *arr);
	return 0;
}