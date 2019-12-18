#include<stdio.h>

void display(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c\n", s[i]);
    }


}


int main()
{
    char str[]="Arif Ahmed";
    display(str);



}
