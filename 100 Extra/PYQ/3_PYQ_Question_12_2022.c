#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp, *fp1;
    char ch;

    fp = fopen("abc.txt","r");
    fp1 = fopen("pqr.txt","w");

    while( !feof(fp))
    {
        ch = fgetc(fp);
        fputc(ch,fp1);
    }

    fclose(fp);
    fclose(fp1);
}