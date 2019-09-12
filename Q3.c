// program which reads 4 (float type) numbers a, b, c and d. The program outputs a and b in the first line and c and d in second line. c is outputted below a and d is outputted below b. a and b have 3 decimal places. c has 5 decimal places. d has 1 decimal place
#include <stdio.h>

int main()
{
  float a, b, c, d;
  printf("Enter 4 floating numbers: ");
  scanf("%f%f%f%f", &a, &b, &c, &d);
  printf("%10.3d %10.3d\n%10.5d %10.1d\n", a, b, c, d);
  return 0;
}
