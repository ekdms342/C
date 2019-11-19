#include <stdio.h>
int main(void)
{
	int num = 1, total = 0;
	do
	{
		total += num * 2;
		num++;
	} while (num * 2 <= 100);
	printf("%d", total);
	return 0;
}