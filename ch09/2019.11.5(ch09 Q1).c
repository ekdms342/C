#include <stdio.h>
int raednum (void);
int bignum (int, int, int);
int smallnum (int, int, int);
int main (void)
{
    int n1,n2,n3;
    n1 = raednum();
    n2 = raednum();
    n3 = raednum();
    printf("small num:%d \n",smallnum(n1,n2,n3));
    printf("bignum:%d \n",bignum(n1,n2,n3));
    return 0;

}
int raednum (void)
{
    int num;
    scanf("%d",&num);
    return num;
} 

int bignum (int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
    {
        return n1;
    }else if(n2>n1 && n2>n3)
    {
        return n2;
    }else 
    {
        return n3;
    }
}

int smallnum (int n1, int n2, int n3)
{
    if(n1<n2 && n1<n3)
    {
        return n1;

    }else if(n2<n1 && n2<n3)
    {
        return n2;
    }else 
    {
        return n3;
    }
}