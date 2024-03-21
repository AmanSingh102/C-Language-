#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,i;
    printf("Enter no og rows : ");
    scanf("%d",&row);

    for( i = 1; i <= row; i++ ) {
    for( col = 1; col <= i; col++ )
    printf("%d",col);
    printf("\n"); }

    getch();
}