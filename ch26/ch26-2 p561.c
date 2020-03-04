#include <stdio.h>
#define SQUARE(X) X*X

int main(void)
{
	int num = 20;

	printf("SQUARE of num: %d \n", SQUARE(num));
	printf("SQUARE of -5: %d \n", SQUARE(-5));
	printf("SQUARE of 2.5: %d \n", SQUARE(2.5));

	printf("SQUARE of 3+2: %d \n", SQUARE(3+2));//3+2*3+2 형태 계산으로 2*3먼저 계산
	return 0;
}