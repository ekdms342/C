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

	printf(" ���ڿ� �Է�:");
	fgets(str, sizeof(str), stdin);
	printf("���� : %d �Է� ��: %s \n", strlen(str), str);

	Remove(str);
	printf("���� : %d �Է� ��: %s \n", strlen(str), str);
	
	return 0;

}