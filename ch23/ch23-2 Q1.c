#include <stdio.h>
 typedef struct point
{
	int xpos;
	int ypos;

}Point;

 void SwapPoint(Point* pos1 ,Point* pos2)
 {
	Point pos;
	pos.xpos = pos1->xpos;
	pos1->xpos = pos2 ->xpos;
	pos2->xpos = pos.xpos;

	pos.ypos = pos1->ypos;
	pos1->ypos = pos2->ypos;
	pos2->ypos = pos.ypos;
	
 }

 void show(Point pos1, Point pos2)
 {
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
 }



int main(void)
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	show(pos1, pos2);

	SwapPoint(&pos1, &pos2);
	show(pos1, pos2);

	return 0;
}
