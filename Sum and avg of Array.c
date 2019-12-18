#include <stdio.h>

int main()
{
    int num[5];
    int i, sum=0;
    printf("Please enter the numbers: \n");
    for(i=0; i<=5; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n", num[i]);
    }
    for (i=0; i<5; i++)
    {
        sum = sum + num[i];
    }
    printf("The sum of the numbers: %d\n", sum);
    printf("The average of the numbers: %.2f", (float)sum/6);
    return 0;
}
