#include<stdio.h>

int main()
{
    int F[10][10], S[10][10], R[10][10];
    int i,j,k, r1, r2, c1, c2, sum=0;

    printf("Please enter the number of rows and numbers of columns of First Matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Please enter the number of rows and numbers of columns of Second Matrix:\n");
    scanf("%d %d", &r2, &c2);

    while(c1!=r2)
    {
        printf("\nError!!!\n\nPlease ensure Column of First matrix = Rows of Second Matrix\n\n");

        printf("Please enter the number of rows and numbers of columns of First Matrix:\n");
        scanf("%d %d", &r1, &c1);

        printf("Please enter the number of rows and numbers of columns of Second Matrix:\n");
        scanf("%d %d", &r2, &c2);
    }

    printf("\nPlease enter the values for First Martrix: \n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("F[%d][%d] = ",i,j);
            scanf("%d",&F[i][j]);
        }
        printf("\n");
    }
    printf("Matrix F: \t");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", F[i][j]);
        }
        printf("\t");
        printf("\n");
        printf("\t\t");

    }

     printf("\nPlease enter the values for Second Martrix: \n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("S[%d][%d] = ",i,j);
            scanf("%d",&S[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix S: \t");

    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", S[i][j]);
        }
        printf("\t");
        printf("\n");
        printf("\t\t");
    }


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
              sum=sum+F[i][k]*S[k][j];
            }
            R[i][j]=sum;
            sum=0;
        }
        printf("\n");
    }
    printf("\nMatrix R = Matrix F * Matrix S:");

    for(i=0;i<r1;i++)
    {

        for(j=0;j<c2;j++)
        {
            //printf("A[%d][%d] = ",i,j);
            printf("\t");
            printf("%d ", R[i][j]);
        }
        printf("\t");
        printf("\n");
        printf("\t\t\t");
    }

    getch();
}
