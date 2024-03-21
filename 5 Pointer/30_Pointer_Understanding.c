#include<stdio.h>
#include<conio.h>
void main()
{
	int n ,m;	
	n = 9;
	m = 9;

	int *p1 = &n;
	int *p2 = &m;

	printf("%d + %d = %d \n",*(&m),*(&n) , *(&m) + *(&n));

	printf("%d x %d = %d\n",*p1,*p2, *p1 * *p1 );

	printf("%u\n",&n);

	printf("%u\n",p1);

	printf("%u\n",&p1);

	getch();
} 