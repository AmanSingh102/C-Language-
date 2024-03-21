#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char alpha;
    printf("Enter any alphabet : ");
    scanf("%c",&alpha);

    if( ! isalpha(alpha))
    {
        //printf("Enter any alphabet : ");
        //exit(0);
    }

    switch(alpha)
    {
        case 'A' : case 'a' : case 'E' : case 'e' : 
        case 'I' : case 'i' : case 'O' : case 'o' : 
        case 'U' : case 'u' :

        printf("%c is a VOWEL",alpha);
        break;

        default :
        printf("%c is a CONSONENT",alpha);
    }

    getch();
}