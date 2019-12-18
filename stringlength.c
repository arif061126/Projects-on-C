#include<stdio.h>

int main()

{
    char s1[]="Arif Ahmed";

//method using strlen function:
/*  int len = strlen(s1);
    printf("%d\n", len); */

    int i, len=0;

    for (i=0; s1[i]!='\0'; i++)
    {
        len++;
    }

    printf("Length = %d\n", len);


}
