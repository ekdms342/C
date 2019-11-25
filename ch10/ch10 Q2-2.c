#include <stdio.h>
void print99(int big, int small);
int main(void)
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n1 < n2)
	{
		print99(n2, n1);
	}
	else
	{
		print99(n1, n2);
	}
	return 0;
}
void print99(int big,int small)
{
	int i;
	for (; small <= big; small++)
	{
		for (i = 1; i < 10; i++)
		{
			printf("%d x %d = %d\n", small, i, small * i);
		}
	}
}