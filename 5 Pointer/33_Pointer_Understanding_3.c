#include<stdio.h>
#include<conio.h>
void main()
{
	printf("UNDERSTANDING OF POINTER\n");
	int a = 10;
	int *ptra = &a;
    
	printf("The address of pointer to a is %p\n",&ptra);
	printf("The address of a is %p\n",&a);
	printf("The address of a is %p\n",ptra);
	printf("The value of a is %d\n",ptra);
	printf("The value of a is %d\n",a);
	
	int *ptr2 = NULL;
	printf("The address of some garbage is %p\n",ptr2);
	
	getch();
}