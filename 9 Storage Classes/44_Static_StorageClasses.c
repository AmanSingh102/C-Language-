# include <stdio.h>
# include <conio.h>
static int n1=1;        //global static, cannot be used in other file using extern
int n2;                 //global, can be used in other file using extern

void main() 
{
    static int n3;         //declared and initialized only once
    static int n4 = 1;     //declared and initialized only once

    auto int n5;           //declared and initialized every time main is called
    auto int n6 = 1;       //declared and initialized every time main is called

    int n7;                 //declared and initialized every time main is called
    n1++, n2++, n3++, n4++, n5++, n6++, n7++;
    printf("\n n1 = %d n2 = %d n3 = %d ", n1, n2, n3);
    printf("n4 = %d n5 = %d n6 = %d n7 = %d", n4, n5, n6, n7);
    
    getch();

    if (n1< 10) 
    main() ;
}