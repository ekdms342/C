#include <stdio.h>
int bignum (int,int);
int main (void)
{
    int n1,n2,i,re=1,Bi;
    scanf("%d %d",&n1 ,&n2);
    Bi = bignum(n1,n2);
    for (i=1;i<Bi;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            re = i;
        }
    }
    printf("%d",re);
    return 0;
}
int bignum (int n1, int n2)
{
    if(n1<n2)
    {
        return n2;
    }else if (n1>n2)
    {
        return n1;
    }
}