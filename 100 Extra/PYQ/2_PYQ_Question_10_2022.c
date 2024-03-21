#include<stdio.h>
#include<conio.h>
#define HRA 0.1
#define TA 0.05

void main()
{
    float sal, bp;
    printf("Enter Basic Pay : ");
    scanf("%f",&bp);

    sal = bp + ( bp * HRA ) + ( bp * TA );
    printf("Net Salary is %f",sal);

    getch(); 
}