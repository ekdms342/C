#include <stdio.h>
#include <string.h>

int main(viod)
{
	int i , size, str1size, str2size;
	char str1[50];
	char str2[50];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	for (size = 0; size < 50; size++)
	{
		if (str1[size] == 32)
		{
			str1size = size;
		}
		if (str2[size] == 32)
		{
			str2size = size;
		}
	}

	i = (str1size > str2size ? str1size : str2size);
	if (!strncmp(str1, str2, i))
	{
		printf("이름이 같다");
	}
	else
	{
		printf("이름이 다르다");
	}

	
	return 0;

}