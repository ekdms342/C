#include <stdio.h>
int show(int* pnum, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d", pnum[i]);
	}
	printf("\n");
}
int add(int* pnum, int num, int add)
{
	int i;
	for (i = 0; i < num; i++)
	{
		pnum[i] += add;
	}
}
int main(void)
{
	int arr1[3] = { 1 , 2 , 3 };
	show(arr1, sizeof(arr1) / sizeof(int));

	add(arr1, sizeof(arr1) / sizeof(int),1);
	show(arr1, sizeof(arr1) / sizeof(int));

	add(arr1, sizeof(arr1) / sizeof(int), 2);
	show(arr1, sizeof(arr1) / sizeof(int));

	add(arr1, sizeof(arr1) / sizeof(int), 3);
	show(arr1, sizeof(arr1) / sizeof(int));
	return 0;
}