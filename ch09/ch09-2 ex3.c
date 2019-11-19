#include <stdio.h>
int main (void)
{
    int num = 1;
    if(num==1)
    {
        int num = 3;//주석처리시 in if num = 11  
        num+=10;
        printf("in if num:%d\n",num);
    }
    printf("in main num:%d",num);
    return 0;
}