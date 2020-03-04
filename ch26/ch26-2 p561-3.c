#include <stdio.h>
#define SQUARE(X) ( (X) * (X) )

int main(void)
{
	int num = 120 / SQUARE(2);

	printf("num: %d \n", num);
	printf("SQUARE of -5: %d \n", SQUARE(-5));
	printf("SQUARE of 2.5: %d \n", SQUARE(2.5));

	printf("SQUARE of 3+2: %d \n", SQUARE(3+2));
	return 0;
}