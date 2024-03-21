#include<stdio.h>
#include<conio.h>
void main()
{
	int n[] = {10,-1,5,-500,6},i,temp,flag=1;
	
	while( flag == 1)
	{
		flag = 0;
		for( i=0; i<4; i++ )
		{
			if(n[i]>n[i+1])
			{
				temp = n[i];
				n[i] = n[i+1];
				n[i+1] = temp;
				flag = 1;
			}
		}
	}
	
	printf("\n Sorted array is : \n");
	for(i=0;i<5;i++)
	printf("\t%d",n[i]);
	
	getch();
}