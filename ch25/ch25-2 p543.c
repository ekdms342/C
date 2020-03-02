#include <stdio.h>

char name[30];

char* READUserName(void)
{
	
	printf("What's toyr name? ");
	gets(name);
	return name;
}
int main(void)
{
	char* name1;
	char* name2;
	name1 = READUserName();
	printf("name1: %s \n", name1);
	name2 = READUserName();//name의 값을 덮어쓴다
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);//name2의 값 출력
	printf("name2: %s \n", name2);
	return 0;
}