#include <stdio.h>
void simple(void)
{
	printf("im so simple \n");
}
int main(void)
{
	int num = 2;
	void* ptr;
	
	ptr = &num;
	printf("%p \n",ptr);

	ptr = simple;
	printf("%p \n", ptr);

	return 0;

 }