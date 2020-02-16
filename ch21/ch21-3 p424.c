#include <stdio.h>
int main(viod)
{
	char* str = "simple string";

	printf("1. puts test ----- \n");
	puts(str);
	puts("So simple string");

	printf("2. puts test ----- \n");
	fputs(str,stdout);
	printf("\n");
	fputs("So simple string",stdout);
	printf("\n");

	printf("3. end of main ----- \n");
	return 0;

}