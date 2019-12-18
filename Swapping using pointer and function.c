#include<stdio.h>

void swapping(int *p1, int *p2)
{
    int temp;

    temp=*p1;
    *p1=*p2;
    *p2=temp;
}




int main()
{
    int x=5, y=10;

    printf("Before swapping:\n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    swapping(&x,&y);

    printf("\n\nAfter swapping:\n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    getch();


}


