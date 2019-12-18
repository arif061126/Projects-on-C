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

    printf("\n\n");


    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r+c==n+1 || r==c)
            {
                switch (ch)
                {
                    case 1: printf("%d ",c); break;
                    case 2: printf("%d ",r); break;
                    case 3: printf("%d ",c%2); break;
                    case 4: printf("%d ",r%2); break;
                    case 5: printf("%c ",c+64); break;
                    case 6: printf("%c ",r+64); break;
                    case 7: printf("%c ",c+96); break;
                    case 8: printf("%c ",r+96); break;
                    case 9: printf("* ",c); break;
                    case 10:printf("# ",c); break;
                    default: printf("Error ");
                }
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");

    }
    getch();
}
