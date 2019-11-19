#include <stdio.h>
int add (int num)
{
    static int total;//total이 함수 종료시 사라지지 않음
    total +=num;
    return total;
}
int main (void)
{
    int num,i;
    for(i=0;i<3;i++)
    {
        printf("scan num%d:",i+1);
        scanf("%d",&num);
        printf("sum: %d\n",add(num));
    }

}