// ----------------  here some with it ----- not solved my sir 
#include<stdio.h>
#include<conio.h>

//int add( int x, int y = 10 )  { return (x+y) ; }
//int add_oth( int a, int b, int c = 30 ) { return (a+b+c); }

void main()
{
    printf("\n%d",add(10));
    printf("\n%d",add(10,20));
    printf("\n%d",add_oth(10,20,30));
    printf("\n%d",add_oth(10,20));
    printf("\n%d",add_oth(100));

    getch();
}