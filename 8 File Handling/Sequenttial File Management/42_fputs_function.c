#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    fp = fopen("putsfile.txt","w");
    fputs("This text written by puts function",fp);
    fclose(fp);
}