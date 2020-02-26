#include <stdio.h>
int main(void)
{
	int ch, i;	
	FILE* fp = fopen("simple.txt", "wt");
	
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("my name is Gang \n",fp);
	fputs("your name is Gim \n",fp);

	fclose(fp);
	return 0;
}