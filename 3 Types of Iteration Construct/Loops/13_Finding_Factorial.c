#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact = 1;
    printf("Enter an integer value : ");
    scanf("%d",&num);

    int temp = num;
    while( temp > 1 )
    {
        fact = fact * temp ;
        temp-- ;                //temp = temp - 1 ;
    }
    printf("Factorial of %d is %d",num,fact);

    printf("\n\nBy For Loop --------------- \n"); // BY USING FOR LOOP
    int num1,fact1 = 1;
    printf("Enter an integer value : ");
    scanf("%d",&num1);
    int temp1 = num1;

    for( ; num1 > 1; num1--)
    fact1 *= num1 ; // fact = fact * num ; 
    printf("Factorial of %d is %d",temp1,fact1);

    getch();
}