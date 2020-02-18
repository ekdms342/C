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
		{"강다은", "010-1234-5678", 21},
		{"이승기", "010-1234-5678", 22},
		{"전지현","010-1111-2222",22}
	};
	int i;

	
	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s 전화: %s 나이: %d \n", arr[i].name, arr[i].pone,arr[i].age);

	}
	return 0;

}
