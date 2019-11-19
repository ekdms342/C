#include <stdio.h>
double CeltoFah (double Cel)
{
    return 1.8 * Cel +32;
}
double FahtoCel (double Fah)
{
    return (Fah-32)/1.8;
}
int main (void)
{
    int ch;
    double Cel , Fah;
    printf(" 1.celsius 2.fahrenheit\n");
    scanf("%d",&ch);
    if(ch == 1)
    {
        scanf("%lf",&Cel);
        printf("Cel to Fah: %f \n",CeltoFah(Cel));

    }else
    {
        scanf("%lf",&Fah);
        printf("Fah to Cel: %f \n",FahtoCel(Fah));
    }
    return 0;
}