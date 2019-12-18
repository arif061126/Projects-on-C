#include<stdio.h>

int main()
{
    int temp,rem,sum=0;
    printf("Strong Numbers: ");
    //scanf("%d",&num);

    for(int j=1;j<=1000000000;j++)
    {
        temp=j;

    while(temp!=0)
    {
        rem=temp%10;
        //double store=pow(rem,3);
        //sum=sum+store;
        int fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }

    //printf("Sum: %d\n",sum);
    if(sum==j)
    {
        printf("%d\t",j);
    }
    sum=0;
    }


    getch();
}
