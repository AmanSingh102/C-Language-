#include<stdio.h>
typedef struct student
{
	int roll, total;
	char name[10];
};

struct student s[100];
FILE   *fp;

void show(int i)
{
	fread( (char*)&s[i], sizeof(s[i]), 1, fp);
	printf( "\nRoll  : %d" , s[i].roll  );
	printf( "\nName  : %s" , s[i].name  );
	printf( "\nTotal : %d" , s[i].total );
	printf( "\n------------------\n" );
}

void get(int i)
{
	printf( "Enter Roll  : ....\b\b\b\b");
	scanf ( "%d" , &s[i].roll );
	printf( "Enter Name  : ............\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf ( "%s" , s[i].name  );
	printf( "Enter total : ....\b\b\b\b");
	scanf ( "%d" , &s[i].total);
	
	fwrite( (char*)&s[i], sizeof(s[i]), 1, fp);
}

void menu()
{
	printf( "\nM A I N    M E N U\n\n"     );
	printf( "\n1. For Inserting Record.\n" );
	printf( "\n2. For Viewing   Record.\n" );
	printf( "\n3. For Updating  Record.\n" );
	printf( "\n4. For Exit. \n\n"          );
	printf( "\n   Your Choice Please : "   );
}

int main()
{
	int rec_num, i;

	printf("\nEnter number of records to be inserted : ");
	scanf("%d" , &rec_num);

	fp = fopen("stud.dat", "w");
	for( i=0 ; i<rec_num; i++ )
	get(i);

	fclose(fp);   

	fp = fopen("stud.dat", "r");
	for( i=0 ; i<rec_num; i++ )
		show(i);

	fclose(fp);
	return 0;
}


