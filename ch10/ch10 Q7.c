#include <stdio.h>
int main (void)
{
   int n,k=0,i=1;
   printf("scan n:");
   scanf("%d",&n);
   for(n;i<=n;i*=2)
   {
        k++;
   }
   printf("%d",k-1);
   return 0;
}