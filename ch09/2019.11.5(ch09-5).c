#include <stdio.h>
int main (void)
{
    int n1,n2;
    int Abn1,Abn2;
    scanf("%d %d",&n1,&n2);
    Abn1 = Absolutevalue(n1);
    Abn2 = Absolutevalue(n2);
    if(Abn1>Abn2)
    {
        printf("%d",Abn1);
    }else
    {
        printf("%d",Abn2);
    }
    return 0;
}
int Absolutevalue (int num)
{
    if (num<0)
    {
        return num*(-1);
    }else
    {
        return num;
    }
    
}