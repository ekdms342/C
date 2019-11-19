#include <stdio.h>
int main (void)
{
    int i;
    int a[3]={1,2,3};
    int b[]={1,2,3,4};
    int c[5]={1,2};
    printf("%d %d %d \n",sizeof(a),sizeof(b),sizeof(c));
    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<sizeof(b)/4;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}