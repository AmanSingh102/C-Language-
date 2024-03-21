#include<stdio.h>
#include<conio.h>

typedef struct student 
{
    int roll,total;
    char name[30];
};

void main()
{
    struct student s[5];
    int i;

    for( i=0; i<5; i++ )
    {
        printf("Enter Roll : ");
        scanf("%d",&s->roll);
        printf("Enter Name : ");
        scanf("%s",s->name);
        printf("Enter total number of Records %d : ",i+1);
        scanf("%d",&s->total);
    }

    for( i=0; i<5; i++ )
    {
        printf("\n\nRecord No. %d",i+1);
        printf("\n--------------------------");
        printf("\nRoll : %d",s->roll);
        printf("\nName : %s",s->name);
        printf("\nTotal : %d",s->total);
    }

    getch();
}