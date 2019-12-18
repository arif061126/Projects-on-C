#include<stdio.h>

int main()
{
    char lower;
    printf("Enter the lowercase character: ");
    scanf("%c",&lower);
    char lowerToUpper=toupper(lower);
    printf("\n%c",lowerToUpper);


    getch();
}
