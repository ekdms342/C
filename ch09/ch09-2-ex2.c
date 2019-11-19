#include <stdio.h>
int simpleP (void)
{
    int num = 12;
    printf("simpleP num: %d\n",num);
    return 0;
}
int simpleP2 (void)
{
    int num = 11;
    printf("simpleP2 num: %d\n",num);
}
int main (void)
{
    int num =10;
    simpleP();
    simpleP2();
    printf("main num:%d",num);
    return 0;
}