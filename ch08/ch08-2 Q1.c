#include <stdio.h>
int main(void)
{
	int dan, num = 1;
	for (dan = 2; dan < 10; dan++)
	{
		if (dan % 2 != 0)
		{
			continue;
		}
		for (num = 1; num < 10; num++)
		{
			printf("%dx%d=%d \n", dan, num, dan * num);
			if (num == dan)
			{
				break;
			}
		}

	}
	return 0;

}