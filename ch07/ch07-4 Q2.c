#include <stdio.h>
int main(void)
{
	int num1, i = 1;
	scanf("%d", &num1);
	for (; num1 >= 1; num1--)
		i *= num1;
	printf("%d", i);
	return 0;
}
