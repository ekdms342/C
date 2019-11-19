#include <stdio.h>
void s (void);
int main (void)
{
    int i ;
    for (i=0;i<3;i++)
    {
        s();
    }
    return 0;
}
void s (void)
{
    static int num;//초기화 할 떄 연산식 못 옴(?) like n2
    int n2 = n2 != 1;
    num++;
    n2++;
    printf("static:%d,local:%d\n",num,n2);
}