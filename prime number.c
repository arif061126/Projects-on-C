#include<stdio.h>

int main()
{
    while(1)
    {
        int i=2,n,count=0;
        printf("Enter any number: ");
        scanf("%d",&n);

        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }

        }

        if(count==0)
        {
            printf("%d is a Prime Number\n",n);
        }
        else
            printf("%d is not a Prime Number\n",n);
    }
    return 0;
}
