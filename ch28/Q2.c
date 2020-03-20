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

	puts("도서정보 입력");
	for (i = 0; i < 3; i++)
	{
		bookinfo[i] = (BOOK*) malloc(sizeof(BOOK));
		fputs("저자:",stdout);
		gets((bookinfo[i])->writer);
		fputs("제목:",stdout);
		gets((bookinfo[i])->bookname);
		fputs("페이지 수:",stdout);
		scanf("%d", &(bookinfo[i])->page);
		getchar();
	}
	puts("도서정보출력");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n저자:%s \n제목:%s \n페이지 수:%d \n",i, (bookinfo[i])->writer, (bookinfo[i])->bookname, (bookinfo[i])->page);
		free(bookinfo[i]);
	}
	
	return 0;
}