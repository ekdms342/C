#include <stdio.h>
void swap(int n1, int n2)
{
	int t = n1;
	n1 = n2;
	n2 = t;
	printf("n1:  %d  n2: %d \n", n1, n2);
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1: %d num2: %d \n", num1, num2);

	swap(num1, num2);
	printf("num1: %d num2: %d", num1, num2);
	return 0;
}