#include <stdio.h>

typedef struct div
{
    int quotient;
    int remainder;
}Div;

extern Div IntDiv(int num1 ,int num2);

int main (void)
{
    Div val = IntDiv(5,2);
    printf("몫: %d \n",val.quotient);
     printf("몫: %d \n",val.remainder);
     return 0;
}