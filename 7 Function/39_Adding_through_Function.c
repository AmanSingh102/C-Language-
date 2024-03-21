#include<stdio.h>
#include<conio.h>

int add( int x, int y) { x = 100; y = 200; return ( x + y ); }  // kuch samajhe

void main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    printf("%d + %d = %d\n",a,b,add(a,b));  // kuch samajhe
    printf("a = %d, b = %d\n",a,b);
    printf("%d + %d = %d\n",a,b,a+b);

    getch();
}