#include <stdio.h>
int main (void)
{
    int i=0;
    int j;
    char a[50];
    scanf("%s",a);
    while(a[i] != '\0')
    {
        i++;
    }
    j = a[0]; 
   for (i;i!=0;i--)
   {
       if(j<a[i])
       {
           j = a[i];
       }    
   }
   printf("%c",j);
   return 0;
}