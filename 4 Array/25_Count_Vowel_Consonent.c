// Determine consonent and vowels
#include<stdio.h>

int main()
{
	int cc=0,vc=0,i;
    char str[100];
    printf("Write Something Here : ");
    gets(str);
    
    for(i=0; str[i] != '\0'; i++)
    {
    	switch(str[i])
    	{
    		case 'A' : case 'a' : case 'E' : case 'e' : case 'I' : case 'i' :
            case 'O' : case 'o' : case 'U' : case 'u' :
            vc++;
			break;
			
			case ' ' :
			break;
			
			default : 
			cc++;
					
		}
	}
	
	printf("Total number of Vowels = %d\n",vc);
	printf("Total number of Consonents = %d",cc);
	return 0;
}