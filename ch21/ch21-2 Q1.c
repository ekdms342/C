#include <stdio.h>
int main(viod)
{
	int ch;
	ch = getchar();
	if (65 <= ch && ch <= 90)
	{
		putchar(ch += 32);
	}else if (97 <= ch && ch <= 122)
	{
		putchar(ch -= 32);
	}
	else
	{
		printf("입력 오류");
		putchar(-1);
	}

	return 0;

}