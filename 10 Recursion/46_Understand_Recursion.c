#include<stdio.h>
#include<conio.h>
void main()
{
    static int n;
    n++;
    printf("\n Hello!!!!");   // Pheli bar print karbe ke baad 10 bar print karega

    if( n <= 10)
    main();
}