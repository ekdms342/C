# include <stdio.h>
int add (int n1, int n2)
{
    return n1 + n2;
}// 함수 선언은 main 함수 앞에 해야한다

int main (void)
{
    int result;
    result = add(2,5);
    printf("%d",result);
    return 0;
}
