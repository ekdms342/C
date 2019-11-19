#include <stdio.h>
int main (void)
{
    int i=0, z,m,j;
    char a[50];
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    j=i;
    i=i-1;
    for(z=0; z != j/2 ;z++,i--)
    {
        m = a[i];
        a[i] = a[z];
        a[z] = m;
    }
    printf("%s",a);
    return 0;
}