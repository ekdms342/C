#include <stdio.h>
 /*typedef struct point
{
	int xpos;
	int ypos;

}Point;*/

typedef struct person
{
	char name[20];
	char phone[20];
	int age;
}Person;

 void show(Person man)
 {
	 printf("%s %s %d", man.name, man.phone, man.age);
 }

 Person get(void)
 {
	 Person man;
	 printf("name phone age\n");
	 scanf("%s %s %d", &man.name, &man.phone, &man.age);
	 return man;
 }
int main(void)
{
	Person man= get();
	show(man);
	return 0;
}
