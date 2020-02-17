#include <stdio.h>
#include <string.h>

int main(viod)
{
	int i , sum = 0;
	char str[20];
	
	
	fgets(str, sizeof(str), stdin);
	
	for (i = 0; i < 20 ; i++)
	{
		if (48 <= str[i] && str[i] <= 57)
		{
			sum += str[i] - 48;
		}
	}

	printf("%d", sum);
	return 0;

}