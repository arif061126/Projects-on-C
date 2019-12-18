#include<stdio.h>

int main()
{
    int r,c,n;

    printf("Please enter the number of rows: ");
    scanf("%d",&n);

    printf("\n");

    for (r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d\t",r*c);
        }
        printf("\n");
    }

    getch();

}
