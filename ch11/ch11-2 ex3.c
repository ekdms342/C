#include <stdio.h>
int main (void)
{
    int i=0;
    char a[10] = "I like me";
    printf("%s\n",a);
    a[6] = '\0';
    printf("%s\n",a);
    a[2] = '\0';
    printf("%s\n",a);
    
    return 0;
}