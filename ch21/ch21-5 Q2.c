#include <stdio.h>
#include <string.h>

int main(viod)
{
	char str1[20];
	char str2[20];
	char str3[20];

	printf("str1:");
	fgets(str1, sizeof(str1), stdin);
	printf("str2:");
	fgets(str2, sizeof(str2), stdin);

	strncpy(str3, str1, sizeof(str1) - 1);
	str3[strlen(str3) - 1] = 0;
	strcat(str3, str2);

	puts(str3);

	return 0;

}