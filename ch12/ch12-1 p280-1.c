#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	int* aa;
	pnum = &num1;//num1 �� �ּҸ� ��ȯ�Ͽ� pnum�� ����
	printf("%p \n", pnum);
	aa = &pnum;
	printf("%p\n", aa);
	*aa += 30;//aa�� ����� �ּ�(pnum�� �ּ�)�� �ִ� data(pnum�� ����� data)�� +30�ؼ� data ����(pnum�� data�� �� �̻� num1�� �ּҸ� ����Ű�� ����)
	printf("%p \n %p \n", pnum, aa);
	*pnum += 30;//pnum�� data�� ����Ǿ pnum�� ���̻� num1�� �ּҸ� ��Ÿ���� ����(num1�� �ּ�+30)
	printf("%d \n", num1);//num1�� ���� ��ȭ�� ����
	pnum = &num2;//num2�� �ּҰ��� pnum�� ����
	*pnum += 10;
	printf("%d \n", num2);
	return 0;
}