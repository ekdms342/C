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
	printf("정수 입력:");
	scanf("%d", &ub.mem1);

	printf("정수 :%d \n", ub.mem1);
	printf("상위 2바이트:%d ,하위 2바이트:%d \n", ub.sb.upper,ub.sb.lower);
	printf("상위 1바이트 아스키:%c , 하위 1바이트 아스키 : %c \n",ub.ch[0],ub.ch[3]);
	
	return 0;
}