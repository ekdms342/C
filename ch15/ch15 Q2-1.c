#include <stdio.h>
void showTenToTwo(int* arr, int num)
{
	for (num -= 1; num >= 0; num--)
	{
		printf("%d", arr[num]);
	}
}
int TenToTwo(int num, int* arr)
{
	int i = 0;
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			arr[i] = 0;
		}
		else
		{
			arr[i] = 1;
		}
		num = num / 2;
		i++;
	}
	return i;
}
int main(void)
{
	int num, i;
	int arr[1000] = { 0 };
	printf("10진수 정수 입력:");
	scanf("%d", &num);
	i = TenToTwo(num, arr);
	showTenToTwo(arr, i);
	return 0;
}

