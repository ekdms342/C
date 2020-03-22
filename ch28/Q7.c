#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct
{
	char name[20];
	char tell[20];
}Person;

void Insert(Person* ps)
{
	puts("[INSERT]");
	printf("input NAME:");
	scanf("%s", &ps->name);
	printf("input TELL:");
	scanf("%s", &ps->tell);
	printf("		Data Inserted \n");
}

void Delete(Person** ps, int index)
{
	char name[20];
	int j;
	int deleteindex = 0;
	puts("[DELETE]");
	scanf("%s", name);
	for (j = 0; j < index; j++)
	{
		if (!strcmp(name, ps[j]->name))
		{
			free(ps[j]);
			deleteindex = j;
		}
	}
	if (deleteindex == 0)
	{
		puts("No data entered");
	}
	else
	{
		puts("successful data deletion");
		for (j = deleteindex; j < index; j++)
		{
			ps[j] = ps[j + 1];
		}
	}
}

void Search(Person** ps, int index)
{
	char name[20];
	int j;
	int serchindex = 0;
	puts("[SEARCH]");
	scanf("%s", name);
	for (j = 0; j < index; j++)
	{
		if (!strcmp(name, ps[j]->name))
		{
			printf("NAME: %s TELL:%s \n", ps[j]->name, ps[j]->tell);
			serchindex = 1;
		}
	}
	if (serchindex == 0)
	{
		puts("No data entered");
	}
}

void PrintAll(Person** ps, int index)
{
	int j;
	puts("[PRINT ALL DATA]");
	for (j = 0; j < index; j++)
	{
		printf("NAME: %s TELL: %s \n", ps[j]->name, ps[j]->tell);

	}
}

void FileWrite(FILE* wfp, Person** psarr,int index)
{
	int i;
	for (i = 0; i < index; i++)
	{
		fprintf(wfp, "%s %s ", psarr[i]->name, psarr[i]->tell);
	}
}

int main(void)
{
	FILE* rfp = fopen("number.txt", "rt");
	Person** psarr = (Person**)malloc(sizeof(Person*));
	int choose = 0;
	int index = 0;
	while (1)
	{
		if (feof(rfp) != 0)
		{
			break;
		}
		psarr[index] = (Person*)malloc(sizeof(Person));
		fscanf(rfp, "%s %s ", psarr[index]->name, psarr[index]->tell);
		index++;
		psarr = realloc(psarr, sizeof(Person*) * (index + 1));
	}
	
	int j;
	while (choose != 5)
	{
		puts("**** MANU ****");
		puts("1. insert");
		puts("2. Delete");
		puts("3. Search");
		puts("4. Print all");
		puts("5. Exit");
		printf("choose the item: ");
		scanf("%d", &choose);
		if (choose == 1)
		{
			psarr[index] = (Person*)malloc(sizeof(Person));
			Insert(psarr[index]);
			index++;


			psarr = realloc(psarr, sizeof(Person*) * (index + 1));

		}
		else if (choose == 2)
		{
			Delete(psarr, index);
			index--;
			psarr = realloc(psarr, sizeof(Person*) * (index + 1));
		}
		else if (choose == 3)
		{
			Search(psarr, index);
		}
		else if (choose == 4)
		{
			PrintAll(psarr, index);
		}
		else
		{
			continue;
		}

	}
	FILE* wfp = fopen("number.txt", "wt");
	FileWrite(wfp,psarr,index);
	fclose(wfp);
	fclose(rfp);
	
	for (j = 0; j < index; j++)
	{
		free(psarr[j]);
	}
	free(psarr);
	return 0;
}