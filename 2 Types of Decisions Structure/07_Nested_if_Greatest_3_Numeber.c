#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);

    if(a>b)
        if(a>c)
            printf("%d is Greatest Number",a);
        else
            printf("%d is Greatest Number",c);
    else
        if(b>c)
            printf("%d is Greatest Number",b);
        else
            printf("%d is Greatest Number",c);       

    getch();
}