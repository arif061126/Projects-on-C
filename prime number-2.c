#include<stdio.h>
void main()
{
    int n,i,count,j;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        count=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                {
                    count++;
                }
        }
        if(count==2)
            printf("%d " ,i);
    }
    getch();
}
