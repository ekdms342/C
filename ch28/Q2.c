#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char writer[20];
	char bookname[100];
	int page;

}BOOK;
int main(void)
{
	int i;
	BOOK *bookinfo[3];

	puts("�������� �Է�");
	for (i = 0; i < 3; i++)
	{
		bookinfo[i] = (BOOK*) malloc(sizeof(BOOK));
		fputs("����:",stdout);
		gets((bookinfo[i])->writer);
		fputs("����:",stdout);
		gets((bookinfo[i])->bookname);
		fputs("������ ��:",stdout);
		scanf("%d", &(bookinfo[i])->page);
		getchar();
	}
	puts("�����������");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n����:%s \n����:%s \n������ ��:%d \n",i, (bookinfo[i])->writer, (bookinfo[i])->bookname, (bookinfo[i])->page);
		free(bookinfo[i]);
	}
	
	return 0;
}