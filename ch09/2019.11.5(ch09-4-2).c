#include <stdio.h>
int readnum (void);
int numbercompare(int,int);
int main (void)
{
    int n1 = readnum();
    int n2 = readnum();
    int result = numbercompare(n1,n2);
    if(result==0)
    {
        printf("same number");
    }else
    {
         printf("bignumber:%d",result);
    }
    return 0;
}
int readnum (void)
{
    int num;
    scanf("%d",&num);
    return num;
}
int numbercompare (int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }else if(n1<n2)
    {
        return n2;
    }else if(n1==n2)
    {
        return 0;
    }

}
