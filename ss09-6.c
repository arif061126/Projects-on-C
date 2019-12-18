#include<stdio.h>
#include<math.h>

float getNorm(float a[], int n)
{
    float sum=0;
    //double sqrt(sum);

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i]*a[i];
    }
    return sum;
}

int main()
{
    float array[]={1,2,3,4,5};
    getNorm (array, 5);
    double sqrt(sum);

    printf("%lf", sqrt);
}


