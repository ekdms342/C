#include <stdio.h>
void readstdinBuffer(void)
{
	while (getchar() != '\n');
}
int main(viod)
{
	char perID[7];
	char name[4];

	fputs("�ֹι�ȣ ���ڸ� �Է�:", stdout);
	fgets(perID, sizeof(perID), stdin);
	//readstdinBuffer();

	fputs("�̸� �Է�:", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹ� ��ȣ ���ڸ�: %s \n", perID);
	printf("�̸�: %s \n", name);

	return 0;

}