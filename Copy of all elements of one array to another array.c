#include<stdio.h>

int main()
{
    int array1[30], array2[30], i, n;

    printf("Enter the size of array1: ");
    scanf("%d", &n);

    printf("please enter the value of Array1: ");

    for(i=0;i<n;i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2: ", array2[i]);
    for(i=0;i<n;i++)
    {
        printf("%d ", array2[i]);
    }
    getch();

}
