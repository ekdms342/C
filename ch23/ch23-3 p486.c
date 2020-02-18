#include <stdio.h>
typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void show(Student* man)
{
	printf("이름:%s", man->name);
	printf("번호:%s", man->stdnum);
	printf("학교:%s", man->school);
	printf("전공:%s", man->major);
	printf("학년:%d", man->year);
	printf("\n");
}
int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("이름:"); scanf("%s", &arr[i].name);
		printf("번호:"); scanf("%s", &arr[i].stdnum);
		printf("학교:"); scanf("%s", &arr[i].school);
		printf("전공;"); scanf("%s", &arr[i].major);
		printf("학년:"); scanf("%d", &arr[i].year);
	}
	for (i = 0; i < 7; i++)
	{
		show(&arr[i]);
	}
	return 0;
}
	