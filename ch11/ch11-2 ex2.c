#include <stdio.h>
int main (void)
{
    int i=0;
    char a[20];
    scanf("%s",a);
    printf("%s\n",a);
    while(a[i] != '\0')
    {
        printf("%c",a[i]);
        i++;
 
    }
    
    return 0;
}