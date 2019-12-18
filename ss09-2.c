#include <stdio.h>
int main(void)
{
int n=4, k=3, i=1, s=0, p=1;
printf("Value 1: %i\n", n + 2 / 3);
printf("Value 2: %f\n", (float)n/8);
printf("Value 3: %i\n", 6 / 2 * 3);
printf("Value 4: %i\n", (int)(1.99999));
printf("Value 5: %i\n", k < 1);
printf("Value 6: %i\n", (k >> 1) << 2);
printf("Value 7: %i\n", ++i);
printf("Value 8: %i\n", (i--)-3);
printf("Value 9: %i\n", n != 1 && 0 < n);
printf("Value 10: %i\n", 0||1 ? 2 : 3);
for(i=0; i<3; i++) {
p *= 2;
s += p;
}
printf("Value 11: %i\n", p);
printf("Value 12: %i\n", s);
return 0;
}
