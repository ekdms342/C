#include <stdio.h>
int main (void)
{
    int i,sum=0,big,small;
    int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    big = small= a[0];
    for(i=1;i<5;i++)
    {
        if(big<a[i])
        {
            big = a[i];
        }
        if(small>a[i])
        {
            small =a[i];
        }
    }
    printf("big:%d small:%d\n",big,small);
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);

    return 0;
}