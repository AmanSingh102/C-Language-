#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 10,b = 20, *c;
	
	c = &a;
	printf("%d",*c);
	
	a = b;
	printf("\n c=%d a=%d b=%d", *c,a,b);
	
	b = *c;
	printf("\n a=%d b=%d c=%d", a,b,*c);
	
	getch();
}