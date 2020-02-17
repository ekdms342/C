#include <stdio.h>
#include <string.h>

int main(viod)
{

	char str1[20];
	char str2[20];
	
	printf("문자열 입력1 : ");
	scanf("%s", str1);
	//fgets(str1,sizeof(str1),stdin);
	printf("문자열 입력2 :");
	scanf("%s", str2);
	//fgets(str2, sizeof(str2), stdin);

	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 동일 합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");
		if (!strncmp(str1, str2, 3))
		{
			puts("그러나 앞의 세 글자는 동일 합니다.");
		}
	}

	return 0;

}