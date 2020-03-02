#include <stdio.h>
#include <stdlib.h>

char* READUserName(void)
{
	char* name = (char*) malloc(sizeof(char)*30);
	printf("What's toyr name? ");
	gets(name);
	return name;
}
int main(void)
{
	char* name1;
	char* name2;
	name1 = READUserName();
	printf("name1: %s \n", name1);
	name2 = READUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	free(name1);
	free(name2);
	return 0;
}