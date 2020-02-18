#include <stdio.h> 
typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;
	
}Sbox;

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
}Ubox;

int main(void)
{
	Sbox sb;
	Ubox ub;
	
	printf("%p %p %p \n", &sb.mem1, &sb.mem2, &sb.mem3);
	printf("%p %p %p \n", &ub.mem1, &ub.mem2, &ub.mem3);

	printf("%d %d", sizeof(sb), sizeof(ub));
	return 0;
}