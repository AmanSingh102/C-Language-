#include<stdio.h>
#include<conio.h>
void main()
{
    int num,range;
    printf("Enter an Integer : ");
    scanf("%d",&num);
    
    for( num; num <= 10; num++ ) {
    for( range = 1; range <= 10; range++ )
    printf("%d x %d = %d\n",num,range,num * range);
    printf("\n"); }

    getch();
}