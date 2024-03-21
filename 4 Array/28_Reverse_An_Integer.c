#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r;
    printf("Enter Number : ");
    scanf("%d",&n);

    while( n > 0 )
    {
        r = n % 10;
        n = n - r;
        n = n/10;
        printf("%d",r);
    }

    // int m,s,rev;
    // printf("\nEnter Number : ");
    // scanf("%d",&m);

    // while( m > 0 )
    // {
    //     s = m % 10;
    //     m = m - s;
    //     m = m/10;
    //     rev = ( rev * 10 ) + s;
    //     rev == m;
    //     printf("%d",m);
    // }
    
    getch();
}