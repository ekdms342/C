# include <stdio.h>
void noreturn (int num)
{
    if (num<0);
    return; // 값의 반환없이 함수를 빠져나감 
}

int readnum (void);// 함수 선언 후 정의는 뒤에 해도 됨

void howtouse (void);//정의 안하고 함수 선언 할 떄는 ; 붙인다!! 

void showadd (int n1);

int add (int n1, int n2)
{
    return n1 +n2;
}// 함수 선언은 main 함수 앞에 해야한다 (호출 전 함수 선언 해야 한다)

int main (void)
{
    int n1 = readnum();
    int n2 = readnum();
    int result = add(n1,n2);
    showadd(result);
    return 0;
}

int readnum (void)
{
    int num;
    scanf ("%d",&num);
    return num;
}

void showadd (int n1)
{
    printf("%d \n",n1);
}

void howtouse (void)
{
    printf("수를 입력받아 덧셈을 출력합니다 \n");
}
