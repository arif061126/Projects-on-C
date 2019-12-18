#include<stdio.h>

int main()
{
    FILE *file;
    file=fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File is closed");
    }
    else
    {
        printf("File is opened");
        fclose(file);
    }



    getch();
}
