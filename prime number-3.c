#include <stdio.h>

int main ()
{
   int n, i, j, count;

   printf("Enter number: ");
   scanf("%d", &n);

   //printf("Prime numbers between %d and %d are:\n", num1, num2);
   // Displaying prime number between num1 and num2
   for (i = 2; i <=n; i++)
   {
      count = 0; //flag is set to 0
      for (j = 2; j <= i/2; j++)
      {
         if (i % j == 0)
         {
            count++;
            break;
         }
      }
      if (count == 0) //if flag == 0, then display i
          printf("%d\t", i);
   }
   return 0;
}
