#include <stdio.h>
typedef struct
{
	double realnum;
	double inum;
}CN;

void SUM(CN* num1, CN* num2)
{
	printf("���� ���]�Ǽ�: %f ���: %f\n",num1->realnum + num2->realnum, num1->inum + num2->inum);
}

void MUL(CN* num1, CN* num2)
{
	 printf("���ǰ��]�Ǽ�: %f ���: %f\n",(num1->realnum * num2->realnum) - (num1->inum * num2->inum), (num1->realnum * num2->inum) + (num1->inum * num2->realnum));
}

int main(void)
{
	CN num1;
	CN num2;
	fputs("���Ҽ� �Է�1[�Ǽ� ���]:",stdout);
	scanf("%lf %lf", &num1.realnum, &num1.inum);
	fputs("���Ҽ� �Է�2[�Ǽ� ���]:",stdout);
	scanf("%lf %lf", &num2.realnum, &num2.inum);
	SUM(&num1, &num2);
	MUL(&num1, &num2);
	return 0;
}