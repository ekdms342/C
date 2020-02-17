#include <stdio.h>
#include <string.h>
struct employee
{
	char name[20];
	char pass[20];
	int pay;
};

int main (void)
{
	struct employee man;
	scanf("%s", man.name);
	scanf("%s", man.pass);
	scanf("%d", &(man.pay));

	printf("이름: %s \n", man.name);
	printf("주민번호 :%s \n", man.pass);
	printf("급여: %d \n", man.pay);

	return 0;
}