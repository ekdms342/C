#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
	struct point* pptr;
};

int main(void)
{
	int i;
	struct point arr[3] = {
		{ 1, 1 },
		{ 2, 2 },
		{ 3, 3 }
	};
	arr[0].pptr = &arr[1];
	arr[1].pptr = &arr[2];
	arr[2].pptr = &arr[0];

	printf("���� ���� ����....\n");
	for (i = 0; i < 3; i++)
	{
		printf("[%d,%d]�� [%d,%d]���� \n", arr[i].xpos, arr[i].ypos, arr[i].pptr->xpos, arr[i].pptr->xpos);
	}
	return 0;
	
}