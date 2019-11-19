#include <stdio.h>
int aaa (int num);
int main (void)
{
    int num,i;
    scanf("%d",&num);
    i = aaa(num);
    printf("%d",i);
}
int aaa (int num)
{
    if(num == 0)
    {
        return 1;
    }
    return aaa(num-1) * 2;
}