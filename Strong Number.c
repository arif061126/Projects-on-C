#include<stdio.h>

int main()
{
    int num,temp,rem,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    temp=num;

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
    if(sum==num)
    {
        printf("Strong");
    }
else
    {
        printf("Not Strong");
    }


    getch();
}


