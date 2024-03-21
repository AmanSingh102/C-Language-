#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10,w;
    ++a;
    w = ++a;
    printf("\n Prefix Increament : a = %d , w = %d",a,w);

    int b = 10,x;
    b++;
    x = b++;
    printf("\n Postfix Increament : b = %d , x = %d",b,x);

    int c = 10,y;
    --c;
    y = --c;
    printf("\n Prefix Decreament : c = %d , y = %d",c,y);

    int d = 10,z;
    d--;
    z = d--;
    printf("\n Postfix Decreament : d = %d , z = %d",d,z);

    getch();
}