#include <stdio.h>
int main(viod)
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("read %d: %s \n", i, str);
	}
	
	return 0;

}