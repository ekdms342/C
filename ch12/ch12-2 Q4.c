#include <stdio.h>
int main(void)
{
	int i ,num;
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* Fw = arr;
	int* Rv = &arr[5];
	for (i = 0 ; i != 3 ; i++)
	{
		num = *Fw;
		*Fw = *Rv;
		*Rv = num;
		Fw++;
		Rv--;
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}