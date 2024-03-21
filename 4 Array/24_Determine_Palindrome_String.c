#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j;
    char str[30], rstr[30];
    printf("Enter one Word : ");
    scanf("%s",str);                

    for( i=0; str[i] != '\0'; i++ );
	for( i--,j=0; i>=0; i--,j++ )
        rstr[j] = str[i];
        rstr[j] = '\0';

    if(strcmp(str,rstr) == 0 )
        printf("Palindrom !!!!!! ");
    else
        printf("Not Palindrom !!!!!! ");

    getch();
}