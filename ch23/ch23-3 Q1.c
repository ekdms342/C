#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point pos1;
	Point pos2;
}Rectangle;

int size(Rectangle * ptr)
{
	int result;
	int len = (ptr->pos1).xpos > (ptr->pos2).xpos ? (ptr->pos1).xpos - (ptr->pos2).xpos : (ptr->pos2).xpos - (ptr->pos1).xpos;
	int h = (ptr->pos1).ypos > (ptr->pos2).ypos ? (ptr->pos1).ypos - (ptr->pos2).ypos : (ptr->pos2).ypos - (ptr->pos1).ypos;
	result = len * h;
	return result;
}

void recLocation(Rectangle* ptr)
{
	Point Ldown = { (ptr->pos1).xpos,(ptr->pos2).ypos };
	Point Rup = { (ptr->pos2).xpos, (ptr->pos1).ypos };
	printf("[%d %d] ", (ptr->pos1).xpos, (ptr->pos1).ypos);
	printf("[%d %d] ", (ptr->pos2).xpos, (ptr->pos2).ypos);
	printf("[%d %d] ", Ldown.xpos, Ldown.ypos);
	printf("[%d %d] ", Rup.xpos, Rup.ypos);
}

int main(void)
{
	Rectangle re = { {7,5},{2,100} };
	int sizerec = size(&re);
	printf("³ÐÀÌ:%d \n", sizerec);

	printf("³× Á¡ÀÇ ÁÂÇ¥:");
	recLocation(&re);
	return 0;

}