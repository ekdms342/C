#include <stdio.h>
int main(void)
{
	FILE* my = fopen("mystory.txt", "rt");
	char str[50];

	if (my == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	
	while (fgets(str ,sizeof(str),my) != NULL)
	{
		printf("%s", str);
	}
	

	fclose(my);
	return 0;
}