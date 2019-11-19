#include <stdio.h>
int main (void)
{
    int cy;
    for (cy=0;cy<3;cy++)
    {
        int num = 0;
        printf("cy:%d in for num:%d \n",cy,num);
        if(cy==2)
        {
            int num;
            num = 5;
            printf("in if num: %d\n",num);
        }
    }
    return 0;
}