#include <stdio.h>
int num;// 전역 변수는 0으로 초기화 
int add (int a);
int main (void)
{
    int num = 13;
    printf("%d\n",num);
    add (3);
    printf("%d\n",num);//main의 지역변수 연산
    num++;
    printf("%d",num);
    return 0;
}
int add (int a)
{
    num+=a;// 번역 변수의 값 연산
    printf("%d",num);
    return a;
}