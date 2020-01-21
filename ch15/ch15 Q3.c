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
int main(void)
{
	int num , i ,first = 0 ,end = 9;
	int arr[10] = { 0 };
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력:");
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			arr[end] = num;
			end--;
		}
		else if (num % 2 != 0)
		{
			arr[first] = num;
			first++;
		}
	}
	Showarr(arr);
	return 0;
}