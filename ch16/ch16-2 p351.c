#include <stdio.h>
int main(void)
{
	int arr[2][3][4];
	double arr2[5][5][5];
	printf("높이 2 , 세로 3, 가로 4 int 형 배열: %d \n", sizeof(arr));
	printf("높이 5 , 세로 5, 가로 5 double 형 배열: %d", sizeof(arr2));
	return 0;
}