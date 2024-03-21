#include<stdio.h>
# define SQUARE(n)(n*n)
int main()
{
	int k, *m = &k;
	printf("\n Enter the number : ");
	scanf("\n %d",&k);
	
	(*m) = (*m) * (*m);
	printf("Square : %d\n",(*m));
	printf("Square : %d",SQUARE(5));
	return 0;
}
