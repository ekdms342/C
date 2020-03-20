#include <stdio.h>
typedef struct
{
	double realnum;
	double inum;
}CN;

void SUM(CN* num1, CN* num2)
{
	printf("합의 결과]실수: %f 허수: %f\n",num1->realnum + num2->realnum, num1->inum + num2->inum);
}

void MUL(CN* num1, CN* num2)
{
	 printf("곱의결과]실수: %f 허수: %f\n",(num1->realnum * num2->realnum) - (num1->inum * num2->inum), (num1->realnum * num2->inum) + (num1->inum * num2->realnum));
}

int main(void)
{
	CN num1;
	CN num2;
	fputs("복소수 입력1[실수 허수]:",stdout);
	scanf("%lf %lf", &num1.realnum, &num1.inum);
	fputs("복소수 입력2[실수 허수]:",stdout);
	scanf("%lf %lf", &num2.realnum, &num2.inum);
	SUM(&num1, &num2);
	MUL(&num1, &num2);
	return 0;
}