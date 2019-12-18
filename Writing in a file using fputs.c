#include<stdio.h>

int main()

{
    FILE*file2;
    char name[50];

    file2=fopen("test2.txt","w");

    if(file2==NULL)
    {
        printf("File is not exist\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name: ");
        gets(name);
        fputs(name,file2);
        printf("File is written successfully\n");
        fclose(file2);
    }



    getch();
}
