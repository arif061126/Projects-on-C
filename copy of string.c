#include<stdio.h>

int main()
{
    char source[20];
    char target[20];

    /* copy of a string using strcpy function:

    strcpy(target,source);

    printf("%s\n", source);
    printf("%s\n", target);*/


    gets(source);
    //scanf("%s", &source);

    int i;

    for(i=0;i<20;i++)
    {

        target[i]=source[i];
    }

    //scanf("%s", &source);

    //printf("%s\n", source);

    printf("Print from the source: %s\n", target);


}
