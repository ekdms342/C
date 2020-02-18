#include <stdio.h>
typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main(void)
{
	INT num = 10;
	PTR_INT pnum = &num;

	UINT num2 = 20;
	PTR_UINT pnum2 = &num2;
	
	UCHAR ch = 'Z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c \n", *pnum, *pnum2, *pch);
	return 0;
}
