#include<stdio.h>

int main()

{
    int num[]={10,20,30,40,50,60,70,80,90,100};
    int value;
    int pos=-1, i;

    printf("The numbers are: ");

    for(i=0;i<10;i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nPlease enter the value what are you looking for: ");
    scanf("%d",&value);

    for (i=0;i<10;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Value is not found.");
    }
    else
    {
        printf("The position of %d is: %d", value,pos);
    }
    return 0;

}
