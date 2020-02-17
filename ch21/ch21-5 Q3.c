#include <stdio.h>
#include <string.h>

int main(viod)
{
	int i, size, j, num = 0; 
	int str1size, str2size;
	int str1num, str2num;
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
		printf("이름이 같다 \n");
	}
	else
	{
		printf("이름이 다르다\n");
	}

	str1num = strlen(str1) - str1size;
	str2num = strlen(str2) - str2size;

	i = (str1num > str2num ? str1num : str2num);
	for (j = 0; j < i; j++)
	{
		if (str1[str1size + j] != str2[str2size + j])
		{
			num += 1; 
			break;
		}
	}
	if (num == 1)
	{
		printf("나이가 다르다 \n");
	}
	else
	{
		printf("나이가 같다\n");
	}
	
	return 0;
}