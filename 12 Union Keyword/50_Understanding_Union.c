#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef union test
{
	char ch, str[20];
	int i;  float f;   double d;
};

void main()
{
	union test t;
	printf("\nSize of Union is %d", sizeof(t));
	getch();

	t.ch='A';
	printf("\nValue stored is %c, %d, %f, %ld",t.ch, t.i, t.f, t.d);
	strcpy(t.str,"B. N. College");
    
	printf("\nValue stored is : string = %s char = %c", t.str, t.ch);
	getch();

	printf("\naddress of members of the union:\n");
	printf("char = %x, char[] = %x, int = %x, float = %x, double = %x",&t.ch,&t.str,&t.i,&t.f,&t.d);

	getch();
}