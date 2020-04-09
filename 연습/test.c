#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printsequence(char* sequence, int start, int end, char ForRever)
{
	int i;
	if (ForRever == '+')
	{
		for (i = start; i <= end; i++)
		{
			printf("%c", sequence[i]);
		}
		printf("\n");
	}
	else
	{
		for (i = end; i >= start; i--)
		{
			if (sequence[i] == 'A')
			{
				printf("T");
			}
			else if (sequence[i] == 'T')
			{
				printf("A");
			}
			else if (sequence[i] == 'C')
			{
				printf("G");
			}
			else if (sequence[i] == 'G')
			{
				printf("C");
			}
		}
		printf("\n");
	}

}

void SEARCH(FILE* rfp, int Idcount, long* fpos)
{
	/*sequence 부르기 사용변수*/
	int num = 1;
	int fileId[20] = { 0 };
	int SPI = 0; //same print index
	int same = 0;
	int check = 0;
	int len = 0;

	char test[400] = { 0 };
	char* sequence = (char*)malloc(sizeof(test));
	int sequencelen = 0;
	int j;

	/**bug검사 사용 변수*/
	int tap1 = 0, tap2 = 0;//1이면 tap ,0이면 오류
	int bug = 1;
	int minus1 = 0;
	int minus2 = 0;

	/*입력값자르기 사용 변수*/
	char Idnum[100];
	char id[100] = "error";
	char numptr1[20];
	char numptr2[20];
	int IDcheck = 1;
	int start = -1; // 0이면 오류 -1이면 tap
	int end = -1;// 0이면 오류 -1이면 tap
	char ForRever = 'E';//E면 tap E나 + - 가 아니면 오류
	int i = 0, numj = 0;


	while (bug != 0)
	{
		puts("입력");
		gets(Idnum);

		bug = 0;


		//CutIdstr(Idnum, &Id, &start, &end, &ForRever);
		/**입력값 자르기**/
		//id[100] = "error";
		IDcheck = 1;
		start = -1; // 0이면 오류 -1이면 tap
		end = -1;// 0이면 오류 -1이면 tap
		ForRever = 'E';//E면 tap E나 + - 가 아니면 오류
		i = 0, numj = 0;
		minus1 = 0;
		minus2 = 0;
		tap1 = 0, tap2 = 0;

		while (Idnum[i] != '\0')
		{
			numj = 0;
			while (Idnum[i] != ':')
			{
				if (IDcheck == 1)
				{
					id[i] = Idnum[i];
					id[i + 1] = 0;
					if (Idnum[i] == '\0')
					{
						//id[0] = '\0';
						break;
					}
				}
				else if (IDcheck == 2)
				{
					
					numptr1[numj] = Idnum[i];
					numptr1[numj + 1] = 0;
					
					start = atoi(numptr1);
					if (strcmp(numptr1 ,"0") == 0 )
					{
						tap1 = 1;
						start = 0;
					}
					if (numptr1[0] == '-')
					{
						minus1 = 1;
					}
					if (Idnum[i] == '\0')
					{
						break;
					}
					numj++;
				}
				else if (IDcheck == 3)
				{

					numptr2[numj] = Idnum[i];
					numptr2[numj + 1] = 0;
					
					end = atoi(numptr2);
					if (strcmp(numptr2, "0") == 0)
					{
						tap2 = 1;
						end = 0;
					}
					if (numptr2[0] == '-')
					{
						minus2 = 1;
					}
					if (Idnum[i] == '\0')
					{
						break;
					}
					numj++;

				}
				else if (IDcheck == 4)
				{
					if (Idnum[i] == '\0')
					{
						break;
					}
					ForRever = Idnum[i];
				}
				
				i++;
			}
			if (Idnum[i] == '\0')
			{
				break;
			}
			IDcheck++;
			if (IDcheck < 5)
			{
				i++;
			}

		}
		//printf("%s %d %d %c \n", id, start, end, ForRever);


		/*자르기 끝*/
		/*if (id[0] == '\0')
		{
			puts("id bug");
			bug = 1;
			continue;
		}
		else
		{*/
			/*ID따른 sequence 받기*/
			for (j = 0; j < Idcount; j++)
			{

				fseek(rfp, fpos[j], SEEK_SET);
				fscanf(rfp, "%s", fileId);
				if (strcmp(fileId, id) == 0)
				{
					check = 0;
					same = 1;
					fseek(rfp, fpos[j] - 1, SEEK_SET);
					SPI = j;
					fgets(test, sizeof(test), rfp);
					test[0] = 1;
					while (test[0] != '>')
					{
						fgets(test, sizeof(test), rfp);
						len = strlen(test);
						test[len - 1] = test[len];
						test[len] = 0;
						num++;
						sequence = (char*)realloc(sequence, sizeof(test) * num);
						if (test[0] != '>')
						{
							if (check == 0)
							{
								strcpy(sequence, test);
								check++;
							}
							else
							{
								strcat(sequence, test);
							}

						}
					}
					break;
				}

			}

		/*ID따른 sequence 받아오기 끝*/
		//}
		

		if (minus1 == 0 && start == -1)
		{
			tap1 = 1;
			start = 0;
		}
		if (minus2 == 0 && end == -1 )
		{
			tap2 = 1;
			end = strlen(sequence);
		}
		if (ForRever == 'E')
		{
			ForRever = '+';
		}

		/*버그 잡기*/
		if (same == 0)
		{
			puts("ID bug");
			bug = 1;
		}
		else if (start < 0)
		{
			puts("start bug");
			bug = 1;

		}
		else if (end < 0)
		{
			puts("end bug");
			bug = 1;
		}else if (tap1 == 0 && start == 0)
		{
			puts("start bug");
			bug = 1;
		}else if (tap2 == 0 && end == 0)
		{
			puts("end bug");
			bug = 1;
		}else if (start > end)
		{
			puts("big start");
			bug = 1;
		}
		else if (end > strlen(sequence))
		{
			puts("big end");
			bug = 1;
		}else if (ForRever != 'E')
		{
			if (ForRever != '+')
			{
				if (ForRever != '-')
				{
					puts("ForRever bug");
					bug = 1;
				}
			}
	
		}
		
		/*버그 잡기 끝*/
	}

	printsequence(sequence, start, end, ForRever);
	free(sequence);


}

int IDFPOS(FILE* rfp, long** fpos, int Idcount)
{
	int Idindex;
	while (1)
	{
		if (feof(rfp) != 0)
		{
			break;
		}
		Idindex = fgetc(rfp);
		if (Idindex == '>')
		{
			(*fpos)[Idcount] = ftell(rfp);

			Idcount++;
			*fpos = (long**)realloc(*fpos, sizeof(long) * (Idcount + 1));
		}

	}
	return Idcount;
}



int main(void)
{
	long* fpos = (long*)malloc(sizeof(long));
	int Idcount = 0;
	int choose = -1;

	FILE* rfp = fopen("test.txt", "rt");
	Idcount = IDFPOS(rfp, &fpos, Idcount);

	while (1)
	{
		choose = -1;
		puts("****MENU****");
		puts("1. 검색");
		puts("2. 나가기");
		scanf("%d", &choose);
		while (getchar() != '\n');

		if (choose == 1)
		{
			SEARCH(rfp, Idcount, fpos);
		}
		else if (choose == 2)
		{
			break;
		}
		else
		{
			puts("잘못된 입력");
			continue;
		}
	}

	fclose(rfp);
	free(fpos);
}