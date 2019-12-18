 #include<stdio.h>

 int main()

 /*{
     char s1[]="My name is ";
     char s2[]="Arif";
     char s3[]=" Ahmed";

     //strcat(s1,s2);
     strcat(s1,"Arif Ahmed");

     printf("%s\n", s1);


 }
*/
{

    char s1[50]="My name is ";
    char s2[]="Arif";
    char s3[]=" Ahmed";
    char s4[]=" Mamun";

    int i,j,k,m,len=0;


    for (i=0;s1[i]!='\0';i++)
    {
        len++;
    }

    for(j=0;s2[j]!='\0';j++)
    {
        s1[len+j]=s2[j];
    }

    for(k=0;s3[k]!='\0';k++)
    {
        s1[len+j+k]=s3[k];
    }

    for(m=0;s4[m]!='\0';m++)
    {
        s1[len+j+k+m]=s4[m];
    }

    printf("%s\n", s1);

}
