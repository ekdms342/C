#include <stdio.h>
int num;
int add (int a);
int main (void)
{
    printf("%d\n",num);
    add (3);
    printf("%d\n",num);
    num++;
    printf("%d",num);
    return 0;
}
int add (int a)
{
    num+=a;
    return a;
}