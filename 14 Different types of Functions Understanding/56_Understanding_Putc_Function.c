#include<stdio.h>
#include<conio.h>

void main()
{
   char msg[] = "Hello world\n";
   int i = 0;

   while (msg[i])
      putc(msg[i++], stdout);
}