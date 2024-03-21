#include<stdio.h>
#include<conio.h>
void main()
{
    int  n = 1,s=0;
    for( ; n <= 3; s+=n, n++);
    printf("Sum of 1 to 10 is %d\n",s);
    getch();

}