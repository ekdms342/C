#include <stdio.h>
int main (void)
{
    int cr,sh,co,re;
    printf("you have moeny: 3500\n");
    for(cr=1;cr<=3;cr++)
    {
        for(sh=1;sh<=2;sh++)
        {
            for(co=1;co<=4;co++)
            {
                re = (cr*500)+(sh*700)+(co*400);
                if(re == 1900);
                {
                    printf("cr:%d,sh:%d,co:%d\n",cr+1,sh+1,co+1);
                }
            }
        }
    }
    return 0;
}