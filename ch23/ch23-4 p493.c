#include <stdio.h> 
typedef struct sbox
{
	unsigned short upper;
	unsigned short lower;
	
}Sbox;

typedef union ubox
{
	int mem1;
	char ch[4];
	Sbox sb;
}Ubox;

int main(void)
{
	Ubox ub;
	printf("���� �Է�:");
	scanf("%d", &ub.mem1);

	printf("���� :%d \n", ub.mem1);
	printf("���� 2����Ʈ:%d ,���� 2����Ʈ:%d \n", ub.sb.upper,ub.sb.lower);
	printf("���� 1����Ʈ �ƽ�Ű:%c , ���� 1����Ʈ �ƽ�Ű : %c \n",ub.ch[0],ub.ch[3]);
	
	return 0;
}