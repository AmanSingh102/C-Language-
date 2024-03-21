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

    if(a>b && a>c)
        printf("%d is Greatest Number",a);
    else if(b>a && b>c)
        printf("%d is Greatest Number",b);
    else if(c>a && c>b)
        printf("%d is Greatest Number",c);
    else
        printf("BOTH NUMBERS ARE EQUAL");
 
    getch();
}    
    