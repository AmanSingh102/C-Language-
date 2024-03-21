#include<stdio.h>
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
	printf( "\nRoll  : %d" , s.roll  );
	printf( "\nName  : %s" , s.name  );
	printf( "\nTotal : %d" , s.total );
	printf( "\n------------------\n" );
}

int main()
{
	int rec_num, pos;
	char ans;
	
	fp = fopen("stud.dat", "r");
	printf("\nEnter record number to display : ");
	scanf("%d" , &rec_num);
	//searching the file based on record number
	pos=(rec_num-1) * sizeof(s);
	fseek(fp, pos, SEEK_SET);
	show();
	return 0;
	fclose(fp);
}


