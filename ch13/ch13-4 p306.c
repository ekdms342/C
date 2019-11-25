#include <stdio.h>
int main(void)
{
	char* ptr[3] = { "Simple", "string", "Array" };
	
	printf("%s \n", ptr[0]);
	printf("%s \n", ptr[1]);
	printf("%s \n", ptr[2]);
	return 0;
}