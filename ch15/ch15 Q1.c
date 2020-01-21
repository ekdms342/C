#include <stdio.h>
void Odd (const int* ptr, int num)
{
	int i;
	printf("홀수 출력:");
	for (i = 0; i < num; i++)
	{
		if (ptr[i] % 2 != 0)
		{
			printf("%d ", ptr[i]);
		}
	}
	printf("\n");
}

void Even(const int* ptr, int num)
{
	int i;
	printf("짝수 출력:");
	for (i = 0; i < num; i++)
	{
		if (ptr[i] % 2 == 0)
		{
			printf("%d ", ptr[i]);
		}
	}
	printf("\n");
}

int main(void)
{
	int arr[10] = { 0 };
	int i;
	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);

	}
	Odd(arr, sizeof(arr) / sizeof(int));
	Even(arr, sizeof(arr) / sizeof(int));
	return 0;
}
	