#include <stdio.h>
 typedef struct point
{
	int xpos;
	int ypos;

}Point;

 void show(Point pos)
 {
	 printf("[%d %d]", pos.xpos, pos.ypos);
 }

 Point get(void)
 {
	 Point cen;
	 printf("Input current pos:");
	 scanf("%d %d", &cen.xpos, &cen.ypos);
	 return cen;
 }
int main(void)
{
	Point curpos = get();
	show(curpos);
	return 0;
}
