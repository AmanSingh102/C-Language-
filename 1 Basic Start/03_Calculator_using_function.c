#include<stdio.h>
#include<conio.h>

float n1,n2,res;
float add(float n1,float n2);
float subtract(float n1,float n2);
float multiplication(float n1,float n2);
float division(float n1,float n2);

void main()
{
    printf("Enter 1st number : ");
    scanf("%f",&n1);
    printf("Enter 2nd number : ");
    scanf("%f",&n2);

    printf("\n Sum of %f and %f is %f",n1,n2,add(n1,n2));
    printf("\n Difference of %f and %f is %f",n1,n2,subtract(n1,n2));
    printf("\n Multiplication of %f and %f is %f",n1,n2,multiplication(n1,n2));
    printf("\n Quaficient of %f and %f is %f",n1,n2,division(n1,n2));

    getch();
}

float add(float x,float y) { return x + y; }
float subtract(float x,float y) { return x - y; }
float multiplication(float x,float y) { return x*y; }
float division(float x,float y) { return x/y; }