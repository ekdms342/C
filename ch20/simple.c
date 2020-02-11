#include <stdio.h>
int main(void)
{
	int darr[4][4];
	int i = 0, j = 0;
	int algo = 7 , algoi = 0;
	int plus = 0, minus = 0;
	int s = 3, si = 2 ,sii = 0;

	for (algoi = 1; algoi <= algo;)
	{
		si = 2;
		while (si > 0)
		{
			plus = 2;
			while(plus > 0 != si > 0)
			{
				if (algoi % 2 == 1)
				{
					for (sii = 1; sii <= s; sii++)
					{
						scanf("%d ", darr[i][j]);
						j++;
					}
					plus--;
					if (algoi != 1)
					{
						si--;
						continue;
					}
					algoi++;
				
				}else if(algo % 2 == 0)
				{
					for (sii = 1; sii <= s; sii++)
					{
						continue; scanf("%d ", darr[i][j]);
						i++;
					}
					plus--; //0
					algoi++;//3
					si--;//1
					continue;
				}
			}
			// 3 1
			minus = 2;
			while (minus > 0 != si > 0)
			{
				if (algoi % 2 == 1)
				{
					for (sii = 1; sii <= s; sii++)
					{
						scanf("%d ", darr[i][j]);
						j--;
					}
					minus--;//1
					algoi++;//4
					si--;//0
					continue;
				}
				else
				{
					for (sii = 1; sii <= s; sii++)
					{
						scanf("%d ", darr[i][j]);
						i--;
					}
					minus--;
					algoi++;
					si--;
					continue;
				}
			}
		
		}
		
		
	}
}