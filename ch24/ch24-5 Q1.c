#include <stdio.h>
int byte(FILE* num )
{
	long fpos = ftell(num);
	long size;

	fseek(num, 0, SEEK_END);
	size = ftell(num);

	fseek(num, fpos, SEEK_SET);
	return size;
}

int main(void)
{
	long fpos;
	FILE* fp = fopen("test.txt", "wt");
	fputs("ABCDEFGH", fp);
	
	fseek(fp, -2, SEEK_END);
	fpos = ftell(fp);
	printf("%d \n", fpos);
	
	printf("파일크기: %d \n", byte(fp));
	fpos = ftell(fp);
	printf("%d \n", fpos);
	
}