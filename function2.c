#include<stdio.h>

void calculatePower(double base, double exp)
{
    double result=1, i;

    for(i=1; i<=exp; i++)
      {
          result=result*base;
      }
    printf("%.f\n", result);

}



int main()
{

    calculatePower(5,10);



}

