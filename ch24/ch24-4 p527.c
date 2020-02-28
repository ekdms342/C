#include <stdio.h>
typedef struct
{
	char name[20];
	char sex;
	int age;
}Friend;
int main(void)
{
	FILE* fp;
	Friend my1;
	Friend my2;

	fp = fopen("simple.bin", "wb");
	printf("이름 성별 나이 순 입력:");
	scanf("%s %c %d", my1.name, &(my1.sex), &(my1.age));
	fwrite((void*)&my1, sizeof(my1), 1, fp);
	fclose(fp);

	fp = fopen("simple.bin", "rb");
	fread((void*)&my2, sizeof(my2), 1, fp);
	printf("%s %c %d \n", my2.name, my2.sex, my2.age);
	fclose(fp);
	return 0;
}