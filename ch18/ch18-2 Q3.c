#include <stdio.h>
void simple1(int** arr1, int* (*arr2)[5])//일차원 포인터 배열의 포인터 == ㅇㅣ중포인터, 이차원 포인터 배열의 포인터 == 이차원 2중 포인터 
{

}

void simple2(int***arr3, int*** (*arr4)[5])//일차원 포인터 배열의 이중 포인터 == 삼중 포인터, 이차원 포인터 배열의 이중 포인터 == 이차원 배열의 삼중 포인터
{

}
int main(void)
{
	int *arr1[3];
	int *arr2[3][5];
	int **arr3[5];
	int ***arr4[3][5];

	simple1(arr1, arr2);
	simple2(arr3, arr4);
}