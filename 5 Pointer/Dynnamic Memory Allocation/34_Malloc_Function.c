#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *ptr,size,i;
    printf("Enter the total numbers of element : ");
    scanf("%d",&size);

    ptr = ( int* ) malloc(size * sizeof(int));

    for( i=0; i<size; i++ )
    {
        printf("Enter the elements value : ");
        scanf("%d",ptr + i);
    }

    for( i=0; i<size; i++ )
        printf("%d\t",*(ptr + i));

    free(ptr);    

    getch();
}