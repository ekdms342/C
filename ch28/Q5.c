#include <stdio.h>
#include <string.h>
int main(void)
{
	char simple;
	char test;
	int check = 0;
	FILE* simplefp = fopen("simple.txt", "rt");
	FILE* testfp = fopen("test.txt", "rt");
	
	while (1)
	{
		simple = fgetc(simplefp);
		test = fgetc(testfp);
		
		if (simple != test)
		{
			check = 1;
			break;
		}
		if (feof(testfp) != 0 && feof(simplefp) != 0)
		{
			break;
		}

	}
	if (check == 1)
	{
		puts("�� ������ ���� �ٸ���");
	}
	else
	{
		puts("�� ������ ���� ������ ����");
	}
	fclose(simplefp);
	fclose(testfp);
	return 0;
}