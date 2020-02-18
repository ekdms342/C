#include  <stdio.h>
struct employee
{
	char name[20];
	char pass[20];
	int pay;

};
int main(void)
{
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf(" 이름 , 주민번호 , 급여 순 입력 \n");
		scanf("%s %s %d", &arr[i].name, &arr[i].pass, &arr[i].pay);

	}

	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s 주민: %s 급여: %d \n", arr[i].name, arr[i].pass,arr[i].pay);

	}

	return 0;

}
