#include<stdio.h>
#include<conio.h>

void main()
{
	int   num = 32767;
	float dec = 123456.789;
	char  str[]={"Bihar"};

	printf("\n----int-----\n");
	printf("\n|%d|",num); 			puts("\t\t\tcontrol string %d");
	printf("\n|%-d|",num);          puts("\t\t\tcontrol string %-d");
	printf("\n|%-10.1d|",num);      puts("\t\tcontrol string %-10.1d");
	printf("\n|%010.2d|",num);      puts("\t\tcontrol string %010.2d");
	printf("\n|%010.5d|",num);      puts("\t\tcontrol string %010.5d");
	printf("\n|%010.6d|",num);      puts("\t\tcontrol string %010.6d");
	printf("\n|%-010.6d|",num);     puts("\t\tcontrol string %-010.6d");
	printf("\n|%010.10d|",num);     puts("\t\tcontrol string %010.10d");
	printf("\n------------\n");
	getch();

	printf("\n---float----\n");
	printf("\n|%f|",dec);			puts("\t\tcontrol string %f");
	printf("\n|%-f|",dec);          puts("\t\tcontrol string %-f");
	printf("\n|%-10.1f|",dec);      puts("\t\tcontrol string %-10.1f");
	printf("\n|%010.2f|",dec);      puts("\t\tcontrol string %010.2f");
	printf("\n|%010.5f|",dec);      puts("\t\tcontrol string %010.5f");
	printf("\n|%010.6f|",dec);      puts("\t\tcontrol string %010.6f");
	printf("\n|%-010.6f|",dec);     puts("\t\tcontrol string %-010.6f");
	printf("\n|%010.10f|",dec);     puts("\tcontrol string %010.10f");
	printf("\n------------\n");
	getch();

	printf("\n---string---");
	printf("\n|%s|",str);			puts("\t\tControl string %s");
	printf("\n|%-10s|",str);		puts("\tControl string %-10s");
	printf("\n------------");
	printf("\n|%-10.0s|",str);		puts("\tControl string %-10.0s");
	printf("\n|%-10.1s|",str);		puts("\tControl string %-10.1s");
	printf("\n|%-10.2s|",str);		puts("\tControl string %-10.2s");
	printf("\n|%-10.3s|",str);		puts("\tControl string %-10.3s");
	printf("\n|%-10.4s|",str);		puts("\tControl string %-10.4s");
	printf("\n|%-10.5s|",str);		puts("\tControl string %-10.5s");
	printf("\n------------");
    
	for(int i=0 ; i<6 ; i++)
	{
		printf("\n|%*.*s|",10,i,str);
		puts("\tControl string %*.*s");
	}
	printf("\n------------");

	getch();
}