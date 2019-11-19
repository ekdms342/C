#include <stdio.h>
int readnum (void);
int bignumber(int,int);
int main (void)
{
    int n1 = readnum();
    int n2 = readnum();
    printf("bignumber: %d", bignumber(n1,n2));
    return 0;
}
int readnum (void)
{
    int num;
    scanf("%d",&num);
    return num;
}
int bignumber (int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }else 
    {
        return n2;
    }

}
