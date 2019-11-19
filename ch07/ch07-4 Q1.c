#include <stdio.h>
int main(void)
{
	int num1, num2, i = 0;
	scanf("%d %d", &num1, &num2);
	for (; num1 <= num2; num1++)
		i += num1;
	printf("%d", i);
	return 0;
}