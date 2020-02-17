#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	
	char str1[20];
	
	printf("정수 입력 : ");
	scanf("%s", str1);
	printf("%d \n", atoi(str1));

	printf("실수 입력: ");
	scanf("%s", str1);
	printf("%g \n",atof(str1));

	return 0;

}