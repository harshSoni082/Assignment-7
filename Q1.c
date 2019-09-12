// program which reads 4 (integer type) numbers a, b, c, and d. The program outputs a and b in the first line and c and d in the second line. c is outputted below a and d is outputted below b. Assume that any of these numbers may have at most 10 digits
#include <stdio.h>

int main()
{
  int a, b, c, d;
  printf("Enter 4 numbers: ");
  scanf("%10d%10d%10d%10d", &a, &b, &c, &d);
  printf("%10d %10d\n%10d %10d\n", a, b, c, d);
  return 0;
}
