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
	printf("�̸�:%s", man->name);
	printf("��ȣ:%s", man->stdnum);
	printf("�б�:%s", man->school);
	printf("����:%s", man->major);
	printf("�г�:%d", man->year);
	printf("\n");
}
int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("�̸�:"); scanf("%s", &arr[i].name);
		printf("��ȣ:"); scanf("%s", &arr[i].stdnum);
		printf("�б�:"); scanf("%s", &arr[i].school);
		printf("����;"); scanf("%s", &arr[i].major);
		printf("�г�:"); scanf("%d", &arr[i].year);
	}
	for (i = 0; i < 7; i++)
	{
		show(&arr[i]);
	}
	return 0;
}
	