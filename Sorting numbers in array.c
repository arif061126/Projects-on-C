#include<stdio.h>

int main()
{
    int a[6]={10,2,30,15,28,5};
    int i,minTOmax[6];
    for(i=0;i<6;i++)
    {
        if(a[i]<a[i+1])
            {
                minTOmax[i]=a[i];
            }
        else
            {
                minTOmax[i]=a[i+1];
            }
    }
    printf("%d\n", minTOmax[i]);


    getch();
}
