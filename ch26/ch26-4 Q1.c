#include <stdio.h>
#define SUM(Y, S, P) ( (Y) + (S) + (P) )
#define MUL(Y, S, P) ( (Y) * (S) * (P) )

int main(void)
{
	printf("덧셈: %d \n", SUM(2, 3, 4));
	printf("곱셈: %d \n", MUL(2, 3, 4));
	return 0;
}