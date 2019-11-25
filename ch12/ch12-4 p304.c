#include <stdio.h>
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr[3] = { &num1, &num2, &num3 };

	printf("%d \n",*ptr[0]);
	printf("%d \n", *ptr[1]);
	printf("%d \n", *ptr[2]);
	return 0;
}