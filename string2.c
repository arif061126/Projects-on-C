#include<stdio.h>
int main()
{
    char s1[30];
    printf("Please enter your full name: ");
    //scanf("%s", &s1);
    gets(s1);
    printf("Your full name: %s", s1);



}
