#include<stdio.h>

int main()

{
    int r,c,n;

    printf("Enter the value of rows: ");

    scanf("%d",&n);

    printf("\n");

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
            {
                printf("  ",c);
            }
        for(c=1;c<=r;c++)
            {
                printf("%d ",c);
            }
        for(c=r-1;c>=1;c--)
            {
                printf("%d ",c);
            }

        printf("\n");
    }
    for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
            {
                printf("  ",c);
            }
        for(c=1;c<=r;c++)
            {
                printf("%d ",c);
            }
        for(c=r-1;c>=1;c--)
            {
                printf("%d ",c);
            }

        printf("\n");
    }

    getch();




}
