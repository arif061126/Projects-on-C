#include<stdio.h>

int main()
{
    int i,num,temp,rem,sum=0;
    printf("Armstrong numbers: \n");
    //scanf("%d",&num);



   for(i=1;i<=1000;i++)
   {
       temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            //double store=pow(rem,3);
            //sum=sum+store;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
       if(sum==i)
       {
           printf("%d\t",sum);
       }
        sum=0;
   }

    //printf("Sum: %d\n",sum);



    getch();
}


