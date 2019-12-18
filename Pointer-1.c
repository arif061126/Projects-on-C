#include<stdio.h>

int main()
{
    int x=5;
    int *p;
    p=&x;

    printf("Value of x= %d\n",x);
    printf("Address of x= %d\n",&x);
    printf("Address of p= %d\n",p);
    printf("Content of P= %d\n",*p);
    printf("Address of p variable= %d\n",&p);



}
