#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i , j, scan ,com;
	int bigim = 0, igim = 0;
	srand((int)time(NULL));
	

	while (1)
	{
		printf("바위는 1 , 가위는 2, 보는 3 :");
		scanf("%d", &scan);
		com = (rand() % 2) + 1;
		
		if (scan == 1)
		{
			printf("당신은 바위 선택,");
			if (com == 1)
			{
				printf("컴퓨터는 바위 선택, 비겼습니다\n");
				bigim += 1;
			}
			else if (com == 2)
			{
				printf("컴퓨터는 가위 선택, 이겼습니다\n");
				igim += 1;
			}
			else
			{
				printf("컴퓨터는 보 선택, 졌습니다\n");
				break;
			}
		}
		else if (scan == 2)
		{
			printf("당신은 가위 선택,");
			if (com == 1)
			{
				printf("컴퓨터는 바위 선택, 졌습니다\n");
				break;
			}
			else if (com == 2)
			{
				printf("컴퓨터는 가위 선택, 비겼습니다\n");
				bigim += 1;
			}
			else
			{
				printf("컴퓨터는 보 선택, 이겼습니다\n");
				igim += 1;
			}
		}
		else
		{
			printf("당신은 보 선택,");
			if (com == 1)
			{
				printf("컴퓨터는 바위 선택, 이겼습니다\n");
				igim += 1;
			}
			else if (com == 2)
			{
				printf("컴퓨터는 가위 선택, 졌습니다\n");
				break;
			}
			else
			{
				printf("컴퓨터는 보 선택, 비겼습니다\n");
				bigim += 1;
			}
		}
	}
	printf("\n");
	printf("게임의 결과: %d 승 %d 무", igim, bigim);
	return 0;
}