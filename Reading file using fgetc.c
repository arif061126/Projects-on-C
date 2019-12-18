#include<stdio.h>

int main()

{
    FILE*file2;
    char name;

    file2=fopen("test2.txt","r");

    if(file2==NULL)
    {
        printf("File is not exist\n");
    }
    else
    {
        printf("File is opened\n");

        while(!feof(file2))
        {
            name=fgetc(file2);
            printf("%c",name);
        }

        fclose(file2);
    }



    getch();
}

