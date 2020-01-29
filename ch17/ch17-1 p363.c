#include <stdio.h>
void swap(int** p1, int** p2)
{
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr = &num1;
	int* ptr2 = &num2;
	printf("%d %d \n", *ptr, *ptr2);
	swap(&ptr, &ptr2);
	printf("%d %d \n",*ptr, *ptr2);
	
	return 0;
}
