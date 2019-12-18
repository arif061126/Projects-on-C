#include<stdio.h>

int main()
{
    char text[] = "Zeiche\n-Kette";
    int x=strlen(text);
    printf("6: %d\n",x);
printf("7: %s\n", text);
printf("8: %c\n", text[3]);
text[2] = '\0';
text[3] = '!';
printf("11: %s\n", text);
printf("12: %s\n", text+10);
}
