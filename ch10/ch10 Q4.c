#include <stdio.h>
int main (void)
{
    int cr,sh,co,num,sum;
    printf("가진금액:");
    scanf("%d",&num);
    for(cr=1;cr*500<=num;cr++)
    {
        for(sh=1;sh*700<=num;sh++)
        {
            for(co=1;co*400<=num;co++)
            {
                sum = cr*500+sh*700+co*400;
                if(sum==num)
                {
                    printf("%d %d %d \n",cr,sh,co);
                    break;
                }
            }
        }
    }
return 0;
}