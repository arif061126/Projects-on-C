#include<stdio.h>

int main()
{
    int num,temp,rem,count=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        //rem=temp%10;
        temp=temp/10;
        count++;
        //temp=temp/10;
    }

    printf("Count: %d\n",count);




    getch();
}
