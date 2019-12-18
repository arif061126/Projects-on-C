#include<stdio.h>

int main()
{
    double x=2.5;
    double *ptr=&x;

    *ptr=x*2;
    printf("%f",*ptr);

    getch();
}
