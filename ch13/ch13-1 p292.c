#include <stdio.h>
int main(void)
{
	int arr[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };
	printf("%d  %g \n", *arr, *arr2);
	*arr += 100;//�迭 �̸� arr�� ��Ÿ���� �ּҴ� 1��° ����� �ּ� *arr = 1��°����� ������
	*arr2 += 120.5;
	printf("%d  %g \n", arr[0], arr2[0]);
	printf("%d  %g \n", arr[1], arr2[1]);
	return 0;
}