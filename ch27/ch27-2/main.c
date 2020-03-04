#include <stdio.h>
void Increment(void);
int GetNum(void);

int main(void)
{
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	return 0;
}