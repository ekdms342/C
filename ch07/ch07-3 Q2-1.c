#include <stdio.h>
int main(void)
{
	int num = 0, total = 0, i = 0;
	do
	{
		i = num * 2;
		total += i;
		num++;
	} while (num * 2 <= 100);
	printf("%d", total);
	return 0;
}