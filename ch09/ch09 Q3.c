#include <stdio.h>
int phbo (int n1)
{
    int i=0,n=0,z=1,s;
    printf("%d\n%d\n",i,z);
    for (n1-=2;n1>0;n1-=3)
    {
        n = i + z;
        printf("%d\n",n);
        if(n1==1)
        {
            break;
        }       
        i = n + z;
        printf("%d\n",i);
        if(n1==2)
        {
            break;
        }
        z = n + i;
        printf("%d\n",z);
    }
}
int main (void)
{
    int num;
    scanf("%d",&num);
    phbo(num);
    return 0;
}