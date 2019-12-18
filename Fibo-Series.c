#include<stdio.h>

int main()
{
    int f=0, s=1, count=0, n, fibo;

    printf("Please enter the range of numbers:  ");
    scanf("%d", &n);

    for (count=0;count<n;count++)
    {
        if (count<=1)
        {
           fibo=count;
        }
        else
        {
            fibo = f+s;
            f = s;
            s = fibo;
        }

    printf("%d ", fibo);
    //count++;
    }
    return 0;

}
