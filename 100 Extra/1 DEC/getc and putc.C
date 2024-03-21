//getc example
#include <stdio.h>
int main()
{ 	char ch;
	printf("Input a character : ");
	/* read a character from the
	standard input stream */
	ch = getc(stdin);
	printf("The character input was: '%c'\n", ch);

	printf("-----------------------------------------------------\n");
	//putc example
	char msg[] = "Hello world\n";
//	printf("Enter the string : ");
//	scanf("%s",msg);
	
	int i = 0;
	while (msg[i])
	putc(msg[i++], stdout);

}
