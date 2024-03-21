#include<stdio.h>
#include<conio.h>

void swap( int *x, int *y ) 
{
    int z = *x;
    *x = *y;
    *y = z;
}
void main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    printf("a = %d, b =%d\n",a,b);
    swap(&a,&b);
    printf("a = %d, b =%d",a,b);
    

    getch();
}