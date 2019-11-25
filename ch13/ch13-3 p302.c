#include <stdio.h>
int main(void)
{
	char str[] = "my string";
	char* str2 = "your string";
	printf("%s %s \n", str, str2);

	str2 = " our string";
	printf("%s %s \n", str, str2);

	str[0] = 'X';
	//str2[0] = 'x';
	//*str2 = "my string"; //(?)
	printf("%s %s \n", str, str2);
	return 0;
}