#include<stdio.h>


int main()
{
    int r,c,n,ch;

    printf("1) Number Right angle-Triangle Pattern-1\n");
    printf("2) Number Right angle-Triangle Pattern-2\n");
    printf("3) Binary Right angle-Triangle Pattern-1\n");
    printf("4) Binary Right angle-Triangle Pattern-2\n");
    printf("5) Alphabet Character Right angle-Triangle Pattern-1\n");
    printf("6) Alphabet Character Right angle-Triangle Pattern-2\n");
    printf("7) Small Alphabet Character Right angle-Triangle Pattern-1\n");
    printf("8) Small Alphabet Character Right angle-Triangle Pattern-2\n");
    printf("9) Spacial Character Right angle-Triangle Pattern-1\n");
    printf("10) Special Character Right angle-Triangle Pattern-2\n");


    printf("\n\nSelect your choice: ");
    scanf("%d",&ch);

    printf("Please insert the number of rows: ");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(ch==1)
            {
                printf("%d ",c);
            }
            if(ch==9)
            {
                printf("* ",c);
            }
            if(ch==10)
            {
                printf("# ",c);
            }
            if(ch==2)
            {
                printf("%d ",r);
            }
            if(ch==3)
            {
                printf("%d ",c%2);
            }
            if(ch==4)
            {
                printf("%d ",r%2);
            }
            if(ch==5)
            {
                printf("%c ",c+64);
            }
            if(ch==6)
            {
                printf("%c ",r+64);
            }
            if(ch==7)
            {
                printf("%c ",c+96);
            }
            if(ch==8)
            {
                printf("%c ",r+96);
            }
            if(ch>10)
            {
                printf("Error");
            }
        }
        printf("\n");

    }
    getch();
}

