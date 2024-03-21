//Managing Flat Files (Text Files, Binary Files, Combination) in C
# include<stdio.h>
int main()
{
/*1*/	FILE *fp;  //FILE is the system defined structure
		char txt[100];

        //clrscr();

/*2*/	fp = fopen("txtfile.txt","w"); //opening file in output mode
		printf("\nEnter text to write/insert in the fle : ");
		gets(txt);
/*3*/	fprintf(fp,"%s",txt);
/*4*/	fclose(fp);

	fp = fopen( "txtfile.txt","r"); //opening file in input mode
	//fscanf(fp,"%s",txt);
	fgets(txt, 60, fp);
	printf("\n%s",txt);
	fclose(fp);

 	return 0;
}

