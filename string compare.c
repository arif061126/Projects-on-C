#include<stdio.h>

int main()

{
    char s1[]="Arif Ahmed";
    char s2[]="Arif Ahmed";

    int d = strcmp(s1,s2);

    if(d==0)
    {
        printf("equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return 0;



}
