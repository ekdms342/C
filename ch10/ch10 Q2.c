#include <stdio.h>
int main (void)
{
    int n1,n2,i;
    scanf ("%d %d",&n1,&n2);
    if(n1<n2)
    {
        for (;n1<=n2;n1++)
        {
            for(i=1;i<10;i++)
            {
                printf("%d x %d = %d\n",n1,i,n1*i);
            }
        }
    }else 
    {
        for (;n2<=n1;n2++)
        {
            for(i=1;i<10;i++)
            {
                printf("%d x %d = %d\n",n2,i,n2*i);
            }
        }
    }
    return 0;
}