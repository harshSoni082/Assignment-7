// program which reads equation of a line and outputs its points of intersection with x-axis
#include <stdio.h>

int main()
{
  float a, b, c;
  printf("Enter equation: ");
  scanf("%fx%fy%f", &a, &b, &c);
  printf("x intercept: %+.2f\n", (-c/a));
  return 0;
}
