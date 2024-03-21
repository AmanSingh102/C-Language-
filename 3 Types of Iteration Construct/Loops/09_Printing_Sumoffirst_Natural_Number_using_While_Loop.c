#include<stdio.h>
#include<conio.h>
void main()
{
    int n = 1,s = 0;
    while (n <= 10)
    {
        s += n;
        n++;
    }
    printf("Sum of 1 to 10 is %d",s);

    getch();
}