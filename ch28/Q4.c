#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* test = fopen("test.txt", "rt");
	int countA = 0 , countP =0;
	char word[100];
	fseek(test, 0, SEEK_SET);
	while (1)
	{
		fscanf(test, "%s", word);
		
		if (word[0] == 'A')
		{
			countA += 1;
		}
		else if (word[0] == 'P')
		{
			countP += 1;
		}
		if (feof(test) != 0)
		{
			break;
		}
	}
	printf("A�� �����ϴ� �ܾ� ��:%d \n", countA);
	printf("P�� �����ϴ� �ܾ� ��:%d \n", countP);
	fclose(test);
}