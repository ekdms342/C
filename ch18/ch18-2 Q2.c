#include <stdio.h>
void simple1(int* arr1, int* arr2)//일차원 배열의 포인터
{

}

void simple2(int(*arr3)[4], int(*arr4)[4])//이차원 배열의 포인터
{

}
int main(void)
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	simple1(arr1, arr2);
	simple2(arr3, arr4);
}