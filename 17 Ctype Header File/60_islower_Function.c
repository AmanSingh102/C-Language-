#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char character ;
    printf("Enter a letter : ");
    scanf("%c",&character);

    if( islower(character) )
    {
        printf("\n %c is a lower case letter",character);
    }
    else
    {
        printf("\n %c is not a lower case letter",character);
    }

    getch();
}