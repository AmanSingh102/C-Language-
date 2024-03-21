#include<stdio.h>
#include<conio.h>

typedef enum week_days   //list of constant names. UDT
{
	Sunday,    //first constant name of the enumerator, value = 0
	Monday,    //next  constant name of the enumerator, value = prev + 1
	Tuesday,   //next  constant name of the enumerator, value = prev + 1
	Wednesday, //next  constant name of the enumerator, value = prev + 1
	Thursday,  //next  constant name of the enumerator, value = prev + 1
	Friday,    //next  constant name of the enumerator, value = prev + 1
	Saturday   //last  constant name of the enumerator, value = prev + 1
};

typedef enum pass_status
{
	Pass = 100, Fail = 0
};

void main()
{
	enum week_days day;   //object instantiation, day is enum object
	
	day = Friday;  //assigning constant name
	printf("%d", day);    //output 5
	getch();

	day = 1; 			  //means day is Monday
	if(day == Monday)
		printf("\nDay is Monday");        //output will be shown
	else
		printf("\nNot monday");
	getch();

	for ( day=Sunday; day<=Saturday; day++)
		printf("\n%d",day);        //outputs 0 to 6
	getch();

	printf("\nEnter the day number : ");
	scanf("%d",day);

	switch(day)
	{
		case 0 : printf("\nSunday"); break;
		case 1 : printf("\nMonday"); break;
		case 2 : printf("\nTuesday"); break;
		case 3 : printf("\nWednesday"); break;
		case 4 : printf("\nThursday"); break;
		case 5 : printf("\nFriday"); break;
		case 6 : printf("\nSaturday"); break;
		default : printf("\nInvalid day number");
	}

	getch();
}