#include<stdio.h>
#define SQUARE(n)(n*n)
#define square(n)(n*n)
#define Square(n)(n*n)

int SqUare(int n) { return n * n;}

void main()
{
	printf("\n %d",SqUare(7));
	printf("\n %d",square(8));
	printf("\n %d",Square(9));   
	printf("\n %d",SQUARE(6));
}
