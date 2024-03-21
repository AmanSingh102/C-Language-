#include<stdio.h>
#include<conio.h>

# define square(n)(n * n)
# define SIZE 50

void main()
{
    printf("\nsquare(5) = %d" , square(5));
    printf("\nsquare(5.5) = %f" , square(5.5));
    printf("\nsquare('a') = %d" , square('a'));
    printf("\nsquare(97) = %d" , square(97));
    printf("\nValue of SIZE = %d" , SIZE);

    #ifdef SIZE
    #undef SIZE
    #define SIZE 20
    #endif

    printf("\nValue of SIZE after #undef = %d" , SIZE);
    
    getch();
}