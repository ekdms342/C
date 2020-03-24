#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SEARCH(FILE * rfp , int Idcount, long * fpos)
{
	int fileId[20] = { 0 };
	long SPI = 0; //same print index
	int same = 0;
	int sameprint = 0;
	int j;
	int Idnum[20] = { 0 };
	puts("입력");
	scanf("%s", Idnum);
	while (getchar() != '\n');

	for (j = 0; j < Idcount; j++)
	{
		sameprint = 0;
		fseek(rfp, fpos[j], SEEK_SET);
		fscanf(rfp, "%s", fileId);
		if (strcmp(fileId, Idnum) == 0)
		{
			same = 1;
			fseek(rfp, fpos[j], SEEK_SET);
			SPI = fpos[j];
			while (sameprint != '*')
			{
				sameprint = fgetc(rfp);
				printf("%c", sameprint);
				SPI++;
			}
			break;
		}
	}
	if (same == 0)
	{
		puts("no data");
	}
	else
	{
		printf("\n");
	}
}

int IDFPOS(FILE * rfp,long** fpos, int Idcount)
{
	int Idindex;
	while (1)
	{
		if (feof(rfp) != 0)
		{
			break;
		}
		Idindex = fgetc(rfp);
		if (Idindex == '>')
		{
			(*fpos)[Idcount] = ftell(rfp);

			Idcount++;
			*fpos = (long**)realloc(*fpos, sizeof(long) * (Idcount + 1));
		}

	}
	return Idcount;
}

int main(void)
{
	long* fpos = (long*)malloc(sizeof(long));
	int Idcount = 0;
	int choose = -1;
	
	FILE* rfp = fopen("test.txt", "rt");
	Idcount = IDFPOS(rfp, &fpos, Idcount);
	
	while (1)
	{
		choose = -1;
		puts("****MENU****");
		puts("1. 검색");
		puts("2. 나가기");
		scanf("%d", &choose);
		while (getchar() != '\n');

		if (choose == 1)
		{
			SEARCH(rfp, Idcount, fpos);
		}
		else if (choose == 2)
		{
			break;
		}
		else
		{
			puts("잘못된 입력");
			continue;
		}
	}

	fclose(rfp);
	free(fpos);
}
