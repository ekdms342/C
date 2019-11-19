#include <stdio.h>
void nineninedan (int n1,int n2);
int main (void)
{
    int n1,n2;
    scanf ("%d %d",&n1,&n2);
    nineninedan(n1,n2);
    return 0;
}
void nineninedan (int n1,int n2)
{   
    int i;
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
}