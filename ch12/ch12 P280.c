#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;//num1 �� �ּҸ� ��ȯ�Ͽ� pnum�� ����
	*pnum += 30;//pnum�� ����� �ּҰ��� ��ġ�� +30�Ͽ� ���� pnum = num1�� �ּҰ� 
	printf("%d \n", num1);
	pnum = &num2;//num2�� �ּҰ��� pnum�� ����
	*pnum += 10;
	printf("%d \n", num2);
	return 0;
}