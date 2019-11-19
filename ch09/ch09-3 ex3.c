#include <stdio.h>
void s (void);
int main (void)
{
    int i;
    for (i=0;i<3;i++)
    {
        s();
    }
    return 0;
}
void s (void)
{
    static int num;//전역 변수의 성격 1번만 초기화 
    int n2 = 1;
    num++;
    n2++;
    printf("static:%d,local:%d\n",num,n2);
}