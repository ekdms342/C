#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int* ptr = &num1;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d %d", *ptr, **dptr, ***tptr);
	return 0;
}
