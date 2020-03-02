#include <stdio.h>
#include <stdlib.h>

void clear(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	int last, i, num, num2, j = 0;
	printf("입력할 문자열의 최대 길이: ");
	scanf("%d", &last);
	char* str2 = (char*)malloc(last);
	char* str = (char*)malloc(last);
	int arr[30] = { 0 };
	
	if (str2 == NULL || str == NULL)
	{
		printf("메모리 할당 실패");
	}
	
	clear();

	gets(str);
	for (i = 0; i < last; i++)
	{
		if (str[i] == ' ')
		{
			arr[j] = i;
			j++;
		}
	}

	j -= 1;
	i = 0;
	while (i < last)
	{
		if (i == 0)
		{
			num = arr[j] + 1;
			for (; num < last; num++)
			{
				str2[i] = str[num];
				i++;
			}
			str2[i] = ' ';
			i += 1;
		}
		else if (j == 0)
		{
			for (num = 0; num < arr[j]; num++)
			{
				str2[i] = str[num];
				i++;
			}
			str2[i] = NULL;
		}
		else
		{
			num = arr[j - 1];
			num2 = arr[j];
			for (num += 1; num < num2; num++)
			{
				str2[i] = str[num];
				i++;
			}
			str2[i] = ' ';
			i += 1;
			j--;
		}
	}

	puts(str2);

	return 0;
}

	
	