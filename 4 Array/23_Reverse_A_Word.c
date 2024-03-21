#include<stdio.h>
#include<conio.h>
void main()
{
    char str[30];
    int i;
    printf("Enter one Word : ");
    scanf("%s",str);

    for( i=0; str[i] != '\0'; i++ ); 
    for( i--; i>=0; i-- )
    printf("%c",str[i]);                  //printf("Reverse word : %c\n",str[i]);

    
    getch();
}