#include <stdio.h>
int main (void)
{
    int scsec,min,hor,sec;
    printf("sec:");
    scanf("%d",&scsec);
    hor = scsec/3600;
    min = scsec%3600;
    sec = min%60;
    min = min/60;
    printf("H:%d M:%d S:%d",hor,min,sec);
    return 0;
}