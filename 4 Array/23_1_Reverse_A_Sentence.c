#include<stdio.h>

int main()
{
	char str[30];
	printf("Enter your Name : ");
	gets(str);
	
	int i;
	for( i=0; str[i] != '\0'; i++ );
	for( i--; i>=0; i-- )
	printf("%c",str[i]);
	
	return 0;
}