﻿#include <stdio.h>
int main(void)
{
	int arr1[3][4] = { 0 };
	int arr2[7][9] = { 0 };
	printf("세로 3 , 가로 4 :%d \n", sizeof(arr1));
	printf("세로 7 , 가로 9 :%d \n", sizeof(arr2));
	return 0;
}