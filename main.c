#include <stdio.h>

int main()
{
    int num[5], i;
    printf("Please enter the numbers: ");
    for(i=0; i<=5; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<=5; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
