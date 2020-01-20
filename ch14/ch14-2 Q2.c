#include <stdio.h>
void swap(int* n1, int* n2, int* n3)
{
	int t = *n1;
	*n1 = *n3;
	*n3 = *n2;
	*n2 = t;
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("num1 num2 num3: %d %d %d \n",num1,num2,num3);
	
	swap(&num1, &num2, &num3);
	printf("num1 num2 num3: %d %d %d \n", num1, num2, num3);
	return 0;
}