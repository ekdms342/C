#include <stdio.h>

struct point 
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phone[20];
	int age;
};

int main (void)
{
	struct point pos = { 10,20 };
	struct person man = { "이승기","010-1234-5678",21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phone, man.age);

	return 0;
}