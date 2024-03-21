#include<stdio.h>
#include<conio.h>
void main()
{
    int n = 1,s = 0;
    do
    {
        s += n;
        n++;
    }while (n != 11);
    printf("Sum of 1 to 10 is %d",s);

    getch();
}