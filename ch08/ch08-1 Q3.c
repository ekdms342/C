#include <stdio.h>
int main(void)
{
	int num1, num2, num3, total;
	scanf("%d%d %d", &num1, &num2, &num3);
	total = (num1 + num2 + num3) / 3;
	if (total >= 90)
	{
		printf("A");
	}
	else if (total >= 80)
	{
		printf("B");
	}
	else if (total >= 70)
	{
		printf("c");
	}
	else if (total >= 50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}