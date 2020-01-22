#include <stdio.h>
void Bubblesort (int input, int* ptr, int len)
{
	int i, swap, end = 0;
	for (end = len - 1; end != 0; end--)
	{
		for (i = 0; i < end; i++)
		{
			if (input == 0 && ptr[i] < ptr[i + 1])
			{
				continue;
			}else if (input == 1 && ptr[i] > ptr[i + 1])
			{
				continue;
			}
			swap = ptr[i];
			ptr[i] = ptr[i + 1];
			ptr[i + 1] = swap;
		}
	}
	
}

void show(int* arr, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			printf("%d", arr[i]);
		}
		else
		{
			printf("%d,", arr[i]);
		}
	}
}

void ScanNum(int* ptr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("입력:");
		scanf("%d", &ptr[i]);
	}
}

int main(void)
{
	int input;
	int arr[7] = {0};
	printf("7개 숫자입력 \n");
	ScanNum(arr, sizeof(arr) / sizeof(int));
	printf("오름차순:0 내림차순:1 \n");
	scanf("%d", &input);
	Bubblesort(input, arr, sizeof(arr) / sizeof(int));
	show(arr, sizeof(arr) / sizeof(int));
}