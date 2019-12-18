#include<stdio.h>

int main()
{
    FILE *file;
    char name[50]="Arif Ahmed";
    int length=strlen(name);
    int i;

    file=fopen("test.txt","w");
    //file=fopen("test.doc","w");
    //file=fopen("test.pdf","w");

    if(file==NULL)
    {
        printf("File is not exist");
    }
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }



    getch();
}
