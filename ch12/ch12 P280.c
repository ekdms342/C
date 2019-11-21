#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;//num1 의 주소를 반환하여 pnum에 저장
	*pnum += 30;//pnum에 저장된 주소값의 위치에 +30하여 저장 pnum = num1의 주소값 
	printf("%d \n", num1);
	pnum = &num2;//num2의 주소값을 pnum에 저장
	*pnum += 10;
	printf("%d \n", num2);
	return 0;
}