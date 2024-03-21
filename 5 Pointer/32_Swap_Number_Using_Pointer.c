#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10, b=20;
    printf(" a = %d, b = %d",a,b);

    int *x = &a;
    int *y = &b;

    int c = *x;
        *x = *y;
        *y = c;

    printf("\n a = %d, b = %d ",a,b);

	// int a = 10,b = 20;	
	// printf("a = %d, b = %d\n",a,b);
	
	// int *ptr = &a;
	// int *ptr2 = &b;

	// int c = *ptr;
	// *ptr = *ptr2;
	// *ptr2 = c;
	
	// printf("a = %d, b = %d",a,b);

    getch();     

}