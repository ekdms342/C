#include <stdio.h>
int main(void)
{
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));// 주소값 자체의 변경 없음

	printf("%d ", *ptr); ptr++;//주소 값 자체의 변경
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	return 0;
}