#include <stdio.h>
void sum(int n1, int n2)
{
	printf("%d + %d = %d \n",n1, n2 , n1 + n2);
}

void printstr(char* str)
{
	printf("%s ", str);
}
int main(void)
{
	char * str= "hello world";
	int n1 = 10, n2 = 20;

	void (*sumptr) (int, int) = sum;
	void (*printstrptr) (char*) = printstr;

	sumptr(n1, n2);
	printstrptr(str);

	return 0;
}