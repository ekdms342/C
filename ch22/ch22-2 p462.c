#include  <stdio.h>
struct person
{
	char name[20];
	char pone[20];
	int age;

};
int main(void)
{
	struct person arr[3] = {
		{"������", "010-1234-5678", 21},
		{"�̽±�", "010-1234-5678", 22},
		{"������","010-1111-2222",22}
	};
	int i;

	
	for (i = 0; i < 3; i++)
	{
		printf("�̸� : %s ��ȭ: %s ����: %d \n", arr[i].name, arr[i].pone,arr[i].age);

	}
	return 0;

}
