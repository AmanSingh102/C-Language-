#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,i;
    printf("Enter no of rows : ");
    scanf("%d",&row);

    for( i = 1; i <= row; i++ ) {
    for( col = 1; col <= i; col++ )
    printf("*");
    printf("\n"); }

    getch();
}