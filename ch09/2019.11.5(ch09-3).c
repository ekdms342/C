# include <stdio.h>
void howtouse (void)
{
    printf("수를 입력받아 덧셈을 출력합니다 \n");
}

void showadd (int n1)
{
    printf("%d \n",n1);
}

int readnum (void)
{
    int num;
    scanf ("%d",&num);
    return num;
}

int add (int n1, int n2)
{
    return n1 + n2;
}// 함수 선언은 main 함수 앞에 해야한다

int main (void)
{
    int n1 = readnum();
    int n2 = readnum();
    int result = add(n1,n2);
    showadd(result);
    return 0;
}
