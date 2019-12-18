#include<stdio.h>


int main()
{
    int r,c,n,count=0;

    printf("Please insert the number of rows: ");
    scanf("%d",&n);

    printf("\n\n");


    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            //count++;
            printf("%d ",++count);

        }
        printf("\n");

    }

    getch();
}


