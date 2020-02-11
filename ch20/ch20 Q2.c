#include <stdio.h>
int main(void)
{
	int darr[100][100] = { 0 };
	int num = 1;
	int darri;
	printf("숫자를 입력 하시오:");
	scanf("%d", &darri);
	int i = 0, j = 0;
	int algo = (darri*2) - 1, algoi = 0;
	int plus = 0, minus = 0;
	int s = darri, si = 2, sii = 0;
	int print = 0, printj = 0;

	for (algoi = 1; algoi <= algo;)
	{
		plus = 2;
		while (plus > 0 || si > 0)
		{
			if (si == 0)
			{
				si = 2;
				s--;
			}

			if (algoi % 2 == 1 && plus != 0)
			{
				if (algoi == 1)
				{
					for (sii = 1; sii <= s; sii++)
					{

						darr[i][j] = num;
						j++;
						num++;
					}
					j--;
					plus--;
					algoi++;
					s--;
				}
				else
				{
					for (sii = 1; sii <= s; sii++)
					{
						j++;
						darr[i][j] = num;
						num++;

					}

					plus--;// 1
					algoi++;//2
					si--;
					continue;
				}

			}

			if (algoi % 2 == 0 && plus != 0)
			{
				for (sii = 1; sii <= s; sii++)
				{
					i++;
					darr[i][j] = num;
					num++;
				}

				plus--; //0
				algoi++;//3
				si--;//1
				continue;
			}

			if (plus == 0)
			{
				break;
			}
		}
		// 3 1
		minus = 2;
		while (minus > 0 || si > 0)
		{
			if (si == 0)
			{
				si = 2;
				s--;
			}

			if (algoi % 2 == 1 && minus != 0)
			{
				for (sii = 1; sii <= s; sii++)
				{
					j--;
					darr[i][j] = num;
					num++;

				}

				minus--;//1
				algoi++;//4
				si--;//0
				continue;
			}

			if (algoi % 2 == 0 && minus != 0)
			{
				for (sii = 1; sii <= s; sii++)//2
				{
					i--;
					darr[i][j] = num;
					num++;

				}

				minus--;//0
				algoi++;//5
				si--;//1
				continue;
			}

			if (minus == 0)
			{
				break;
			}
		}

	}



	for (print = 0; print < darri; print++)
	{
		for (printj = 0; printj < darri; printj++)
		{
			printf("%d ", darr[print][printj]);
		}
		printf("\n");

	}
	return 0;
}