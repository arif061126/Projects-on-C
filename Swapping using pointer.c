#include<stdio.h>

int main()
{
    int x=5, y=10, temp;
    int *p1,*p2;
    p1=&x;
    p2=&y;

    printf("Before swapping:\n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("\n\nAfter swapping:\n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    getch();


}

