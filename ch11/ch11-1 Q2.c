#include <stdio.h>
int main (void)
{
    int i;
    char a[8] = {'g','o','o','d','t','i','m','e'};
    printf("\"");
    for(i=0;i<8;i++)
    {
        printf("%c",a[i]);
    }
    printf("\"");
    return 0;
}

 /*char a[5]={34,71,79,79,68};
    char b[5]={84,73,77,69,34};*/