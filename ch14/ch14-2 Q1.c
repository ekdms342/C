#include <stdio.h>
int SquareByValue(int n1)
{
	n1 *= n1;
	return n1;
}
void SquareByReference(int* n1, int* n2)
{
	*n1 *= *n1;
	*n2 *= *n2;
}
int main(void)
{
	int Sq1, Sq2;
	int num1 = 10;
	int num2 = 20;
	
	Sq1 = SquareByValue(num1);
	Sq2 = SquareByValue(num2);
	printf("num1: %d num2: %d \n", num1, num2);
	printf("Sq1: %d Sq2: %d \n", Sq1, Sq2);

	SquareByReference(&num1, &num2);
	printf("num1: %d num2: %d \n", num1, num2);
	return 0;
}