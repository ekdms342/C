#include <stdio.h>
char* READUserName(void)
{
	char name[30];
	printf("What's toyr name? ");
	gets(name);
	return name;//name�� �ּҰ��� ��ȯ �ϴµ� name�� ġ�� �����Ͱ� �Ҹ��
}
int main(void)
{
	char* name1;
	char* name2;
	name1 = READUserName();
	printf("name1: %s \n", name1);
	name2 = READUserName();
	printf("name2: %s \n", name2);
	return 0;
}