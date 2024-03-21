#include<stdio.h>
#include<ctype.h>
void main( int argc,char * argv[])
{
    int i = 1, fact = 1;
    int num  = atoi(argv[1]);
    
    for( ; i<=num; i++)
    fact = fact * i;
    printf("factorial of %d is %d",num,fact);
}