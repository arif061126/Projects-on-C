#include <stdio.h>

int main()
{
    int num[5];
    int i, j, sum=0;
    printf("Please enter the numbers: \n");
    for(i=0; i<=5; i++)
    {
        scanf("%d", &num[i]);
    }
    for(j=0; j<=5; j++)
    {
        printf("%d ", num[j]);
    }

    return 0;
}
