#include <stdio.h>
int main(void)
{
	FILE* src = fopen("simple.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	int ch;
	
	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
	}
	if (feof(src) != 0)
	{
		puts("���� ���� �Ϸ�");
	}
	else
	{
		puts("���� ���� ����");
	}

	fclose(src);
	fclose(des);
	return 0;
}