#include <stdio.h>
void Showarr(int* arr)
{
	int i;
	printf("배열 요소의 출력:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

void ScanNum(int* scanarr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("입력:");
		scanf("%d", &scanarr[i]);
	}
}

void CheckOddEven(int* scanarr, int len, int *arr)
{
	int i, first = 0, end = len - 1;
	for (i = 0; i < len; i++)
	{
		if (scanarr[i] % 2 == 0)
		{
			arr[end] = scanarr[i];
			end--;
		}
		else 
		{
			arr[first] = scanarr[i];
			first++;
		}
	}	
}

int main(void)
{
	int num;
	int scanarr[10] = { 0 };
	int arr[10] = { 0 };
	printf("총 10개의 숫자 입력\n");
	ScanNum(scanarr, sizeof(scanarr) / sizeof(int));
	CheckOddEven(scanarr, sizeof(scanarr) / sizeof(int), arr);
	Showarr(arr);
	return 0;
}