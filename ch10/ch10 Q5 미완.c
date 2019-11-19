#include <stdio.h>
int main (void)
{
    int prim=2,i,pn,prime;
    for (i=1;i<=10;prim++)
    {   
        for(pn=2;pn<=prim;pn++)
        { 
            if(prim % pn==0)
            {
                break;//not prim
            }     
            
        }
        i++;    
    }
    return 0;
}