#include <stdio.h>
int main (void)
{
    char a[]="Good morning!";
    printf("%d\n",sizeof(a));
    printf("%d\n",a[13]);
    printf("%c\n",a[13]);

    a[12] = '?';
    printf("%s",a);
    return 0;
}