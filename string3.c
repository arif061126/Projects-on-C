#include<stdio.h>
int main()

{
    char s1[] = "Moneeza";

    int i=0;

    /*for (i=0; i<8;i++)
    {
        printf("%c ", s1[i]);
    }*/

    while(s1[i]!= '\0')
    {
        printf("%c ", s1[i]);
        i++;
    }

}
