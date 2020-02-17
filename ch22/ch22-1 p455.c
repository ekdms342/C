#include <stdio.h>
#include <math.h>
struct point
{
	int xpos;
	int ypos;
};

int main (void)
{
	struct point pos1, pos2;
	double distance;

	fputs("point 1pos : ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point 2pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
		(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("두 점 사이의 거리: %g 이다", distance);
	return 0;
}