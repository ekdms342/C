#include <stdio.h>
int main(void)
{
	FILE* my = fopen("mystory.txt", "wt");

	if (my == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	fputs("# �̸�: ������ \n", my);
	fputs("# �ֹ� ��ȣ : 900208 - 1012589 \n", my);
	fputs("# 전화번호: 010-1111-2222 \n", my);

	fclose(my);
	return 0;
}