#include <stdio.h>
void re (int num)
{
    if(num==0)
    {
        return ;
    }
    printf("%d\n",num);
    re(num-1);
}
int main (void)
{
    int num =3;
    re(num);
    return 0;
}