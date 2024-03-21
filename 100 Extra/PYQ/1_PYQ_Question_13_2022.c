//element search
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10]={23,45,67,89,56,34,70,15,61,79},a,b,flag=0;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&a);

    for( b=0; b<10; b++ )
    {
         if(arr[b]==a)
         {
             flag=1;
             break;
        }
    }

    if(flag==1)
        printf("%d is an element of array having index value %d",a,b);
    else
        printf("%d not found",a);

    getch();

    }