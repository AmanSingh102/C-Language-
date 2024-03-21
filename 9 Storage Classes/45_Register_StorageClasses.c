# include <stdio.h>
# include <conio.h>
//register int x; eror, globally not allowed
void main()
{
    register double i;
    printf("\naddress of i = %x, value of i = %lf", i, i);
    printf("\nStarting loop");

    for ( i = 1 ; i < 1000000 ; i++);
    printf("\nloop ends");

    getch();
}