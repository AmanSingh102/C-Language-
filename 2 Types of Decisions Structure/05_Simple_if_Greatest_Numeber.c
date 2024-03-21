#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);

    if(a>b)
        printf("%d is Greatest Number",a);
    else
        printf("%d is Greatest Number",b);

    getch();
}