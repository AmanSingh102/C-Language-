#include<stdio.h>
#include<conio.h>
void main()
{
    int n,t,r,rev=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    t=n;
    while( t>0 )
    {
        r = t % 10;
        t = t - r;
        t = t/10;
        rev = ( rev * 10 ) + r;
    }

    if( rev == n )
        printf("%d is an Palindrome Number",n);
    else
        printf("%d is not an Palindrome Number",n);

    getch();
}