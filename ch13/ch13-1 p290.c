#include <stdio.h>
int main(void)
{
	int a[3] = { 1, 2, 3 };
	printf("배열의 이름: %p\n", &a);
	printf("1 번째요소의 주소:%p\n", &a[0]);
	printf("2 번째요소의 주소:%p\n", &a[1]);
	printf("3 번째요소의 주소:%p\n", &a[2]);
	//a = &a[1]; // 컴파일 에러 a는 배열의 시작 주소값을 나타냄,변경 불가능 한 상수형태
	return 0;

}