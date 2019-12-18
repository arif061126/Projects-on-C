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
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    //printf("Sum: %d\n",sum);
    if(sum==num)
    {
        printf("Armstrong");
    }
else
    {
        printf("Not Armstrong");
    }


    getch();
}

