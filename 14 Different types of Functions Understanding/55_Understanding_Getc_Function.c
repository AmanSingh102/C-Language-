#include <stdio.h>
#include<conio.h>
void main()
{
   char ch;

   printf("Input a character:");
   
   //read a character from the standard input stream
   ch = getc(stdin); 
   
   printf("\nThe output through putc(): ");   
   
   //displays the charcater in standard output
   putc(ch,stdout);
   
   printf("\nThe output through printf(): '%c'\n", ch);
}

