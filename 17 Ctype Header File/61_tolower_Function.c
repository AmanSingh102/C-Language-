#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char uppercaseletter ;
    printf("Enter a Uppercase letter : ");
    scanf("%c",&uppercaseletter);

    char lowercaseletter = tolower(uppercaseletter);

    printf(" Upppercse : %c\n Lowercase : %c\n ",uppercaseletter,lowercaseletter);
    getch();
}