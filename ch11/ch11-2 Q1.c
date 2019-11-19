#include <stdio.h>
int main (void)
{
    int i=0;
    char a[50];
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    
    return 0;
}