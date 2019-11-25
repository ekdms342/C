#include <stdio.h>
int main(void)
{
	int arr[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };
	printf("%d  %g \n", *arr, *arr2);
	*arr += 100;//배열 이름 arr이 나타내는 주소는 1번째 요소의 주소 *arr = 1번째요소의 데이터
	*arr2 += 120.5;
	printf("%d  %g \n", arr[0], arr2[0]);
	printf("%d  %g \n", arr[1], arr2[1]);
	return 0;
}