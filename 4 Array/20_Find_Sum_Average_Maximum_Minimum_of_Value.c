#include<stdio.h>
#include<conio.h>
void main()
{
    int num[5],i,sum = 0 ;
    float avg ;
    int max = -32768;
	int min = 32767;

    for( i = 0; i<5; i++ )
    {
        printf("Enter an Integer Value  : ");
        scanf("%d",&num[i]);
        sum = sum + num[i];

        if(num[i] > max)max = num[i];
		if(num[i] < min)min = num[i];
    }

    avg = sum/5;

    printf("\n");

    for( i = 0; i<5; i++ )
    printf("%d\t",num[i]);
    printf("\n Sum is %d",sum);

    printf("\n Average is %f",avg);
    
    printf("\n Max is %d",max);      
	printf("\n Min is %d",min);

    getch();
}