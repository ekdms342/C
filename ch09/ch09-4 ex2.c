#include <stdio.h>
int re (int num)
{
    int fac = 1;
    if(num==0)
    {
        return fac;
    }
    fac = num * re(num-1);
}
int main (void)
{
    int num;
    scanf("%d",&num);
    printf("%d!:%d",num, re(num));
    return 0;
}