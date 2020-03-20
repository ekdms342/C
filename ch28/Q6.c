#include <stdio.h>
#include <string.h>

typedef struct 
{
	char name[20];
	char tell[20];
}Person;

void Insert(Person* ps , int i)
{
	puts("[INSERT]");
	printf("input NAME:");
	scanf("%s", &ps[i].name);
	printf("input TELL:");
	scanf("%s",&ps[i].tell);
	printf("		Data Inserted");
}

void Delete(Person** ps,int i)
{
	char name[20];
	int j;
	int check = 0;
	puts("[DELETE]");
	scanf("%s", name);
	for(j = 0; j <= i; j++)
	{
		check = strcmp(name, ps[j]->name);
		if (check == 0)
		{
			free(ps[j]);
		}
	}
}

int main(void)
{
	Person** psarr = (Person**)malloc(sizeof(Person*));
	int choose;
	int i = 0;
	puts("1. insert");
	puts("2. Delete");
	puts("3. Search");
	puts("4. Print all");
	puts("5. Exit");
	printf("choose the item: ");
	scanf("%d", &choose);

	if (choose == 1)
	{
		psarr[i] = (Person*)malloc(sizeof(Person));
		Insert(psarr[i], i);
		i++;
		
		psarr = realloc(psarr, sizeof(Person*) * i);
		
	}
	else if (choose == 2)
	{
		Delete(psarr, i);
	}
	else if (choose == 3)
	{
		//Search(psarr, i);
	}
	else if (choose == 4)
	{
		//PrintAll(psarr, i);
	}
	else
	{
		return 0;
	}

}