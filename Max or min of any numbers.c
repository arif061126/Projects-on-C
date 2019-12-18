#include <stdio.h>

int main()
{
    int num[100];
    int i, n;
    printf("Please enter how many numbers you want to take: \n");
    scanf("%d", &n);
    printf("Please input the numbers: \n", num[i]);

    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = num[0];
    for (i=1; i<n; i++)
    {
        if (max<num[i])
            max=num[i];
    }
    printf("The maximum of the numbers: %d\n", max);

    getch();
}
