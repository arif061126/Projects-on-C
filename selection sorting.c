#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of values for array: ");
    scanf("%d",&n);

    int a[n],i,j,temp;
    printf("\nEnter the unsorted values for array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted array: a[%d]= ",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSorted array: a[%d]= ",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }



    getch();
}
