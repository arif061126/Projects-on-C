#include <stdio.h>
int c = 33;
void funnyfunction(int a)
{
int b= 4;
a = 3;
c = 1;
printf("2: a=%i, b=%i, c=%i\n", a, b, c);
return;
}
int main(void)
{
int a = 1;
int b = 2;
printf("1: a=%i, b=%i, c=%i\n", a, b, c);
funnyfunction(a);
printf("3: a=%i, b=%i, c=%i\n", a, b, c);
if(a < c*10000) {
int a = 4;
b = 5;
printf("4: a=%i, b=%i, c=%i\n", a, b, c);
}
printf("5: a=%i, b=%i, c=%i\n", a, b, c);
return c;
}
