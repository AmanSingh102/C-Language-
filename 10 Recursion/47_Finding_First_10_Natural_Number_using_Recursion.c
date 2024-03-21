//WAP, using recursive function, to print first 10 natural numbers
#include<stdio.h>
#include<conio.h>

void f1(int x){
	printf("\n%d",x);
	x++;
	if(x<=10)   //exit point of the recursive function
		f1(x);  //recursive calling
}

void main()
{
	f1(1);   
	getch();
}