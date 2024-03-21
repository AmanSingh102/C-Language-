#include<stdio.h>
#include<conio.h>
void main()
{
    int n,t,r,s=0;
    printf("Enter the 3 Digit Number : ");
    scanf("%d",&n);

    t=n;
    while( t>0 )
    {
        r = t % 10;
        s = s + ( r*r*r );
        t = t - r;
        t = t/10;
    }

    if( s==n )
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is not an Armstrong Number",n);

    getch();
}