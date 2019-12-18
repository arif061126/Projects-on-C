#include<stdio.h>


int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int start=0,end=9,mid,key;

    key=60;

    do
    {
        mid=(start+end)/2;
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

