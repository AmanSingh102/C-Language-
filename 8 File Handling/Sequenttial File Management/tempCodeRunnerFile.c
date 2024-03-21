#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    fp = fopen("file1.txt","r");
    printf("%d",ftell(fp));          // if 0 retrun means file Exit, if -1 return means file not exist
}