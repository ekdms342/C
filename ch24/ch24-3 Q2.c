#include <stdio.h>
int main(void)
{
	FILE* my = fopen("mystory.txt", "at");

	if (my == NULL)
	{
		puts("ÆÄÀÏ ¿ÀÇÂ ½ÇÆĞ");
		return -1;
	}
	fputs("# Áñ°Ü¸Ô´Â À½½Ä: Â«»Í,ÅÁ¼öÀ° \n", my);
	fputs("# Ãë¹Ì: Ãà±¸ \n", my);
	

	fclose(my);
	return 0;
}