#include <stdio.h>
#define MAX(A, B) ( (A) > (B) ? (A) : (B) ) 

int main(void)
{
	printf("큰 수: %d", MAX(3, 4));
	return 0;
}