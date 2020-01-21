#include <stdio.h>
void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20; // const 선언으로 값의 변경을 하지 않으려고 했는 데 값을 변경 하였음
}
int main(void)
{
	int num = 10;
	int* ptr = &num;
	printf("%d \n", num);
	ShowData(ptr);
	printf("%d \n", num);
}