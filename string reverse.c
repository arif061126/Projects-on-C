#include<stdio.h>

int main()

/*{
    char str[]="Arif Ahmed";

    printf("%s\n", str);

    strrev(str);

    printf("%s\n",str);



}*/

{
   char s1[30]="Arif Ahmed";
   char s2[30];

   int i,j,len=0;

   for(i=0;s1[i]!='\0';i++)
   {
       len++;
   }
   for(j=0, i=len-1; i>=0; i--, j++)
   {
       s2[j] =s1[i];
   }
   s2[j]='\0';

   printf("%s\n", s1);
   printf("%s\n", s2);



}
