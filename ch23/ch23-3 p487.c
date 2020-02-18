#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen;
	double rad;
}Circle;

void show(Circle* ptr)
{
	printf("[%d,%d] \n", (ptr->cen).xpos, (ptr->cen).ypos);
	printf("radius: %g \n\n", ptr->rad);
}

int main(void)
{
	Circle c1 = { {1, 2}, 3.5 };
	Circle c2 = { 2, 4, 3.9};
	show(&c1);
	show(&c2);
	return 0;

}