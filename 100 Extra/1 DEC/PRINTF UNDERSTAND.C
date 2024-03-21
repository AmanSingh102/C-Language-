# include<stdio.h>

int main()
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
	printf("\n------------\n");
	
	printf("\n------------\n");
	printf("\n--- Make Using Above Understanding ---\n");
	char str1[] = {"*****"};
	int z;
	for(z=0; z<5; z++) {
	printf("\n %*.*s",5,z,str1);  }
	printf("\n------------\n");
		
printf("\n------------");
	printf("\n--- Understand 0th Space in int ---");
	int m = 10;
	printf("\n%06d",m);                 puts("\t\t\t10 number start with 0 -> input 10 '%06d'");
	printf("123456");                   puts("\t\t\t6 digit space\n");
	printf("------------\n");
	
	printf("\n------------");
	printf("\n--- Understand 0th Space in Float ---");
	float k = 10.6;
	printf("\n%10.6f",k);               puts("\t\t10 whole and 6 occupies decimal space -> input 10.6 '%10.6f'");
	printf("1234567890");               puts("\t\t10 digit space\n");
	printf("------------\n");
	
	printf("\n------------");
	printf("\n--- Understand 0th Space in int with decimal specifier ---");
	int l = 32767;
	printf("\n%10.6d",l);               puts("\t\t6 digit occupies 5 digit mandatory and 0 is default -> input 32767 '%10.6d'");
	printf("1234567890");               puts("\t\t10 digit space\n");
	printf("------------\n");
		
	return 0;
}
