#include <stdio.h>
int main(viod)
{
	int c1, c2;

	c1 = getchar();
	c2 = fgetc(stdin);

	putchar(c1);
	fputc(c2, stdout);

	return 0;

}