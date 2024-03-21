#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;	
		
	for(i=0; i<3; ++i) 
	for(j=0; j<3; j++) 
    {  
		printf("Enter the Array Elements of !st Matix :- ");	
		scanf("%d",&a[i][j]); 
    }
	    
	printf("\n");		
	printf("!st Matrix \n");	
	for(i=0; i<3; ++i)            
	{
		for(j=0; j<3; j++)   
		printf("%d\t",a[i][j]);
	    printf("\n");
	}
	
		
    printf("\n");	
	int b[3][3],k,l;		

	for(k=0; k<3; ++k) 
	for(l=0; l<3; l++) 
	{   
        printf("Enter the Array Elements of 2nd Matix :- ");	
		scanf("%d",&b[k][l]);
	}
	

	printf("\n");		
	printf("2nd Matrix\n");	
	for(k=0; k<3; ++k)           
	{
		for(l=0; l<3; l++)   
		printf("%d\t",b[k][l]);	    
	    printf("\n");
	}	
	
	printf("\n");
    printf("ADDITION OF MATRIX\n");
	printf("%d\t %d\t %d\n",a[0][0] + b[0][0],a[0][1] + b[0][1],a[0][2] + b[0][2]);
	printf("%d\t %d\t %d\n",a[1][0] + b[1][0],a[1][1] + b[1][1],a[1][2] + b[1][2]);
	printf("%d\t %d\t %d\n",a[2][0] + b[2][0],a[2][1] + b[2][1],a[2][2] + b[2][2]);
	
	printf("\n");
	printf("MULTIPLICATION  OF MATRIX\n");
	printf("%d\t %d\t %d\n",a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0] , a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1] , a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2]);
	printf("%d\t %d\t %d\n",a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0] , a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1] , a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2] * b[2][2]);
	printf("%d\t %d\t %d\n",a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0] , a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1] , a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2] * b[2][2]);
	
	getch();
}