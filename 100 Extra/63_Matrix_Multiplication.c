#include<stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], add[3][3], i, j, sum;

    printf("\nEnter the elements of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the matrix1 %d%d element:",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }


    printf("\nEnter the elements of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the matrix2 %d%d element:",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }


    printf("\nFirst Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",mat1[i][j]);
        }
        printf("\n");
    }


    printf("\nSecond Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",mat2[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(int k=0;k<3;k++)
            {
                sum += mat1[i][j]*mat2[k][j];
            }
            add[i][j]=sum;
        }
    }



    printf("\nProduct of the two matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}