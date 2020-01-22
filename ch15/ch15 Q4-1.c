#include <stdio.h>
int PalCheck(char* arr, int num)//자료형 확인 잘하자!!
{
	int end = num - 1, i, check = 0;
	for (i = 0; i <= num / 2; i++)
	{
		if (arr[i] != arr[end])
		{
			check = 1;
			break;
		}
		end--;
	}
	return check;
}

int CountLen(char* arr)
{
	int num = 1;
	while (arr[num] != '\0')
	{
		num++;
	}
	
	return num;
}

void PrintPal(int check)
{
	if (check == 0)
	{
		printf("회문 입니다.");
	}
	else
	{
		printf("회문 X 입니다.");
	}
}

int main(void)
{
	int i;
	int check;
	char arr[100];
	printf("문자열 입력:");
	scanf("%s", arr);
	PrintPal(PalCheck(arr,CountLen(arr)));
	return 0;
}