#include <stdio.h>
int add (int,int); //함수 정의 전 선언 할떄는 변수 선언 안해도 됨 

int main (void)
{
    int result;
    result = add (3,5);
    printf("%d",result);
    return 0;
}

int add (int n1 ,int n2) //함수 정의 할때는 변수 선언 해줘야 한다
{
    return n1 + n2;
}