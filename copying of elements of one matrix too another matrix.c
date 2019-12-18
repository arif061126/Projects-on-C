#include<stdio.h>

int main()
{
    int A[3][4], B[3][4];
    int i,j;

    printf("Please enter the values: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            B[i][j]=A[i][j];
        }
    }

    printf("Matrix B: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            //printf("B[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    getch();
}
