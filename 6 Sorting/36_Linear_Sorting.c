#include<stdio.h>
#include<conio.h>
void main()
{
	int n[] = {10,-1,5,-500,6},i,j,temp;
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]>n[j])
			{
				temp = n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	
	printf("\n Sorted array is : \n");
	for(i=0;i<5;i++)
	printf("\t %d",n[i]);
	
	getch();
}