#include<stdio.h>
#include<conio.h>
void main()
{
    // While loop
    printf("WHILE LOOP ----------------------------\n");
    int n = 1,s = 0;
    while (n <= 10)
    {
        s += n;
        n++;
    }
    printf("Sum of 1 to 10 is %d",s);

    // Do..While Loop
    printf("\nDo..WHILE LOOP  ------------------------\n");
    int m = 1, t = 0;
    do
    {
        t += m;
        m++;
    }while (m != 11);
    printf("Sum of 1 to 10 is %d",t);

    // For Loop
    printf("\nFOR LOOP  -------------------------------\n");
    int  l = 1,u=0;
    for( ; l <= 10; u += l, l++);
    printf("Sum of 1 to 10 is %d\n",t);

    getch();
}