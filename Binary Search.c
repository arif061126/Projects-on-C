#include<stdio.h>


int main()
{
    int i, n;/*={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};*/
    printf("Enter the number of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Please enter the value in serial order in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("a[%d]=",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int start=0,end=n+1,mid,key,k;

    printf("\nEnter the Key value: ");
    scanf("%d",&k);

    key=k;

    do
    {
        mid=(int)((start+end)/2);
        printf("Start:%d\tEnd:%d\tMid:%d\tKey:%d\n",start,end,a[mid],key);
        if(a[mid]==key)
        {
            printf("Position of Key value is: %d",mid+1);
            break;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else
            start=mid+1;
    }while(start<=end);

    if(start>end)
    {
        printf("failed\n");
        printf("Start: %d\t End: %d\t Mid: %d\t Key: %d\n",a[start],a[end],a[mid],key);
    }


    getch();
}

