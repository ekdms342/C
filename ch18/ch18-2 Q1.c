#include <stdio.h>
int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int** ptr = arr1;//포인터 배열의 주소를 포인터 == 이중 포인터
	int* (*ptr)[5] = arr2;//이차원 포인터 배열의 주소를 포인터 == 이중 포인터인데 이차원 배열을 포인터 해야 한다
}