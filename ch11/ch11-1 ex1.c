#include <stdio.h>
int main (void)
{
    int a[3];
    int sum=0, i;
    a[0]=1,a[1]=2,a[2]=3;
    for (i=0;i<3;i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}