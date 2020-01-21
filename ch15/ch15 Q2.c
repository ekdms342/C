#include <stdio.h>
void showTenToTwo(int* arr, int num)
{
	for (num -= 1; num >= 0; num--)
	{
		printf("%d ", arr[num]);
	}
}
int main(void)
{
	int num, i = 0;
	int arr[1000] = { 0 };
	printf("10진수 정수 입력:");
	scanf("%d", &num);
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			arr[i] = 0;
		}
		else if (num % 2 == 1)
		{
			arr[i] = 1;
		}
		num = num / 2;
		i++;
	}
	showTenToTwo(arr, i);
	return 0;
}

	