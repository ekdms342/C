#include <stdio.h>
int main(void)
{
	int a, z;
	for (a = 1; a < 10; a++)
	{
		for (z = 1; z < 10; z++)
		{
			if (a + z == 9)
			{
				printf("%d%d+%d%d=99\n", a, z, z, a);
			}
		}
	}
	return 0;
}