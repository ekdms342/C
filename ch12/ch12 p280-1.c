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
	*aa += 30;//aa�� ����� data(pnum�� �ּ�)�� +30�ؼ� data ����(pnum�� �ּҰ� �����)
	printf("%p \n %p \n", pnum, aa);
	*pnum += 30;//pnum�� �ּҰ� ����Ǿ pnum�� ���̻� num�� �ּҸ� ��Ÿ���� ����(�����Ⱚ+30)
	printf("%d \n", num1);//num1�� ���� ��ȭ�� ����
	pnum = &num2;//num2�� �ּҰ��� pnum�� ����
	*pnum += 10;
	printf("%d \n", num2);
	return 0;
}