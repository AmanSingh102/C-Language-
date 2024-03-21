#include<stdio.h>
#include<conio.h>
void main()
{
    int num[3][3],i,j;

    for( i=0; i<3; i++ ) 
    for( j=0; j<3; j++ ) {
    printf("Enter an Integer : ");
    scanf("%d",&num[i][j]); }

    printf("\nMatix of 3 x 3 ---------------\n");
    for( i=0; i<3; i++ ) {
    for( j=0; j<3; j++ )
    printf("%d ",num[i][j]);
    printf("\n"); }

    printf("\nTranspose of Matix of 3 x 3 ---------------\n");
    for( i=0; i<3; i++ ) {
    for( j=0; j<3; j++ )
    printf("%d ",num[j][i]);
    printf("\n"); }



    getch();
}