#include<stdio.h>

int main()

{
    FILE*file2;
    char name[50];

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
            fgets(name,40,file2);
            printf("%s",name);
        }

        fclose(file2);
    }



    getch();
}
