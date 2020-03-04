#include <stdio.h>
#include "areaArith.h"
#include "round.h"

int main (void)
{
    printf("삼각형의 넓이(밑변4, 높이2): %g \n", TriangleArea(4,2) );
    printf("원넓이(반지름3): %g \n", CicrcleArea(3) );

    printf("직사가형의 둘레(밑변 2.5 , 높이 5.2): %g \n", RectangleRound (2.5 ,5.2) );
    printf("정사가형의 둘레(변의 길이 3): %g \n", SquareRound(3) );
    return 0;
   
}