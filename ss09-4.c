#include <stdio.h>
int main(void)
{
int a = 1, b = 3;
int *c = &b;
int *d = &b;
printf("1: %x\n", &c);
printf("2: %x\n", c);
printf("3: %i\n", *c);
*d = *d + 1;
printf("4: %i, %i\n", *c, *d);
d = &a;
printf("5: %i, %i\n", *c, *d);
*c = *d;
printf("6: %i, %i\n", a, b);
a*=3;
printf("7: %i, %i\n", *c, *d);
c = d;
printf("8: %i, %i\n", *c, *d);
return 0;
}
