// program which reads 6 (integer type) numbers a, b, c, d, e, and f. The program outputs a and b in the first line; c, d, e, and f in the second line. c and d are outputted below a and e and f are outputted below b
#include <stdio.h>

int main()
{
  int a, b, c, d, e, f;
  printf("Enter 6 numbers: ");
  scanf("%10d%10d%5d%5d%5d%5d", &a, &b, &c, &d, &e, &f);
  printf("%10d %10d\n%5d %5d %5d %5d\n", a, b, c, d, e, f);
  return 0;
}
