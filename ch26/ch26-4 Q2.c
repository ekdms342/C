#include <stdio.h>
#define PI 3.14
#define AREA(R) ((R)*(R)*(PI)) 

int main(void)
{
	int rad;
	printf("반지름:");
	scanf("%d", &rad);
	printf("원의 넓이: %g", AREA(rad));
	return 0;
}