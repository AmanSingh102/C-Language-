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
	printf( "\nRoll  : %d" , s.roll  );
	printf( "\nName  : %s" , s.name  );
	printf( "\nTotal : %d" , s.total );
	printf( "\n------------------\n" );
}
void main()
{
	int rec_num=0, pos, flag;
	char ans, nam[10];
	clrscr();

	fp = fopen("stud.dat", "r");
	printf("\nEnter name to SEARCH : ");
	scanf("%s" , nam);

	flag=0;
	fread( (char*)&s, sizeof(s), 1, fp );
	while(!feof(fp))
	{
		rec_num++;
		if( strcmp(s.name,nam) == 0 )
		{
			flag = 1;
			show();
			break;
		}
		fread( (char*)&s, sizeof(s), 1, fp );
	}

	if(flag == 0)
		printf("\nRecord not found");
	else
	{
		//further processing after the sucessful search
		printf("\nRecord found at position %d",rec_num);
	}

	getch();
	fclose(fp);
}


