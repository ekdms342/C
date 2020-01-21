#include <stdio.h>
void ShowAllData(const int* ptr, int num)//const 선언으로 배열을 출력 하되 변경은 못 하게 하고 있다 (혹시 모를 면경을 예방)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d", ptr[i]);
	}
}
int main(void)
{
	int arr[3] = { 1, 2, 3 };
	ShowAllData(arr, sizeof(arr) / sizeof(int) );
	return 0;
}