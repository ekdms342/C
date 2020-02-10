#include <stdio.h>
int whoisfirst(int age1, int age2, int (*cmp) (int n1, int n2))
{
	return cmp(age1, age2);
}

void oldfirst(int age1, int age2)
{
	int first;

	if (age1 > age2)
	{
		return age1;
	}
	else if (age1 < age2)
	{
		return age2;

	}
}
void youngfirst(int age1, int age2)
{
	int first;

	if (age1 < age2)
	{
		return age1;
	}
	else if (age1 > age2)
	{
		return age2;
	}
}
	
int main (void)
{
	int first;
	int age1 = 20 , age2 = 30;
	
	printf("입장순서 1 \n");
	first = whoisfirst(age1, age2, oldfirst);
	printf("%d 세와 %d 세 중 %d 세 먼저 입장 \n", age1, age2, first);

	printf("입장순서 2 \n");
	first = whoisfirst(age1, age2, youngfirst);
	printf("%d 세와 %d 세 중 %d 세 먼저 입장 \n", age1, age2, first);


	return 0;
}