#include <stdio.h>
 typedef struct point
{
	int xpos;
	int ypos;

}Point;

/*typedef struct person
{
	char name[20];
	char phone[20];
	int age;
}Person;*/
 void OrgSymTrans(Point* ptr)
 {
	 ptr->xpos = (ptr->xpos) * -1;
	 ptr->ypos = (ptr->ypos) * -1;
 }

 void show(Point pos)
 {
	 printf("[%d, %d]\n", pos.xpos, pos.ypos);
 }

 /*Person get(void)
 {
	 Person man;
	 printf("name phone age\n");
	 scanf("%s %s %d", &man.name, &man.phone, &man.age);
	 return man;
 }*/
int main(void)
{
	Point pos = { 7, -5 };
	OrgSymTrans(&pos);
	show(pos);
	OrgSymTrans(&pos);
	show(pos);
	
	return 0;
}
