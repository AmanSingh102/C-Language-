#include "myhead.h"
typedef struct student
{
	int roll, total;
	char name[10];
};

struct student s;
FILE   *fp;

void show()
{
	fread( (char*)&s, sizeof(s), 1, fp);
	printf( "\nRoll     : %d" , s.roll  );
	printf( "\nName  : %s" , s.name  );
	printf( "\nTotal   : %d" , s.total );
	printf( "\n------------------\n" );
}

void get()
{
	printf( "Enter Roll  : ....\b\b\b\b");
	scanf ( "%d" , &s.roll );
	printf( "Enter Name  : ............\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf ( "%s" , s.name  );
	printf( "Enter total : ....\b\b\b\b");
	scanf ( "%d" , &s.total);
	fwrite( (char*)&s, sizeof(s), 1, fp);
}


void main()
{
	int rec_num, pos;
	char ans;
	clrscr();
	fp = fopen("stud.dat", "r+");
	printf("\nEnter record number to Edit/Modify/Update : ");
	scanf("%d" , &rec_num);

	//POSITIONING the file pointer based on record number
	//AND CHECKING THE RECORD
	pos=(rec_num-1) * sizeof(s);
	fseek(fp, pos, SEEK_SET);
	show();
	
	//REPOSITIONING for EDITING/writing the new data
	fseek(fp, pos, SEEK_SET);
	get();

	//REPOSITIONING for checking MODIFIED data
	fseek(fp, pos, SEEK_SET);
	show();

	getch();
	fclose(fp);
}


