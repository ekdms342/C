#include <stdio.h>
int* ThtoOne(int(*darr)[3][4], int* index)
{
	static int arr[24] = { 0 };// 함수를 벗어나면 저장된 값이 다 사라지니까 static 변수를 써야 한다!! 
	int check[3] = { 0 };
	int* ptr[3];
	int checki[3];
	int arri ,i, j, k, num = 0 , h , s, g;
	for (arri = 0; arri < 3; arri++)
	{
		if (index[arri] == 0)
		{
			h = arri;
		}
		if (index[arri] == 1)
		{
			s = arri;
		}
		if (index[arri] == 2)
		{
			g = arri;
		}
	}

	check[h] = checki[h] = 2;
	check[s] = checki[s] = 3;
	check[g] = checki[g] = 4;
	ptr[0] = check + h;
	ptr[1] = check + s;
	ptr[2] = check + g;

	for (check[2] = 0; check[2] < checki[2]; check[2] += 1)
	{
		for (check[1] = 0; check[1] < checki[1]; check[1] += 1)
		{
			for (check[0] = 0; check[0] < checki[0] ; check[0] += 1)
			{
				arr[num] = darr[*ptr[0]][*ptr[1]][*ptr[2]];
				num++;
			}
		}
	}
	return arr;
}

int main(void)
{
	int i;
	int darr[2][3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 ,21, 22 ,23, 24 };
	int index[3] = { 0, 1, 2 };
	int* larr = ThtoOne(darr, index);
	for (i = 0; i < 24; i++)
	{
		printf("%d ", *(larr + i));
	}

	return 0;
}