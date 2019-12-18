#include<stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i,j, numberOfRows, numberOfColumns;

    printf("Please enter the number of rows and numbers of columns:\n");
    scanf("%d %d", &numberOfRows, &numberOfColumns);


    printf("\nPlease enter the values for Martrix A: \n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColumns;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A: \t");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColumns;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", A[i][j]);
        }
        printf("\t");
        printf("\n");
        printf("\t\t");

    }

     printf("\nPlease enter the values for Martrix B: \n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColumns;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B: \t");

    for(i=0;i<numberOfRows;i++)
    {

        for(j=0;j<numberOfColumns;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", B[i][j]);
        }
        printf("\t");
        printf("\n");
        printf("\t\t");
    }


    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColumns;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
    }
    printf("\nMatrix C = Matrix A + Matrix B:");

    for(i=0;i<numberOfRows;i++)
    {

        for(j=0;j<numberOfColumns;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", C[i][j]);
        }
        printf("\t");
        printf("\n");
        printf("\t\t\t");
    }

    getch();
}
