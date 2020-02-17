#include <stdio.h>
#include <string.h>

void Remove(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}
int main(viod)
{
	char str[100];

	printf(" 문자열 입력:");
	fgets(str, sizeof(str), stdin);
	printf("길이 : %d 입력 값: %s \n", strlen(str), str);

	Remove(str);
	printf("길이 : %d 입력 값: %s \n", strlen(str), str);
	
	return 0;

}