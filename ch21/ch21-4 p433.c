#include <stdio.h>
void readstdinBuffer(void)
{
	while (getchar() != '\n');
}
int main(viod)
{
	char perID[7];
	char name[4];

	fputs("주민번호 앞자리 입력:", stdout);
	fgets(perID, sizeof(perID), stdin);
	readstdinBuffer();

	fputs("이름 입력:", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민 번호 앞자리: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;

}