//recursive function
//a function that calls itself.
//process is called recursion
//the function must have an exit point
//otherwise the cll will enter into infinite loop
//WAP to find the factorial of a given number using recursion

#include<stdio.h>
#include<conio.h>

int factorial(int n)   //recursive function
{
	if ( n < 1 )      //exit point
		return 1;
	else
		return n * factorial(n-1);      //recursive call
}

void main()
{
	int num, f;

	printf("\nEnter a number : ");
	scanf ("%d" , &num);

	f = factorial(num);   //first call to recursive function
	printf("\nFactorial of %d is %d", num ,f);

	getch();
}