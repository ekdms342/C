#include <stdio.h>
int main(void)
{
	FILE* my = fopen("mystory.txt", "at");

	if (my == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	fputs("# ��ܸԴ� ����: «��,������ \n", my);
	fputs("# ���: �౸ \n", my);
	

	fclose(my);
	return 0;
}