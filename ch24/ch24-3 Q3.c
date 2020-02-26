#include <stdio.h>
int main(void)
{
	FILE* my = fopen("mystory.txt", "rt");
	char str[50];

	if (my == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	
	while (fgets(str ,sizeof(str),my) != NULL)
	{
		printf("%s", str);
	}
	

	fclose(my);
	return 0;
}