#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double base = 2.0;
    double exponent = 3.0;

    double result = pow( base, exponent );
    printf("\n %lf rasied to power of %lf is %lf \n",base,exponent,result);

    getch(); 
}