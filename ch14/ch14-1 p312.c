#include <stdio.h>
void Showarayelem(int* prum, int arrnum)
{
	int i;
	for (i = 0; i < arrnum; i++)
	{
		printf("%d", prum [i] );
		printf("\n");
	}
}
int main(void)
{
	int arr1[3] = { 1 , 2 , 3 };
	int arr2[4] = { 1 , 2 , 3 , 4 };
	Showarayelem(arr1, sizeof(arr1) / sizeof (int));
	Showarayelem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}