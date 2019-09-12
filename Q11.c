// program which reads quadratic equation and print its roots
#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, D, r1, r2;
  printf("Enter equation: ");
  scanf("%fx%fy%f", &a, &b, &c);
  D = (b*b - 4*a*c);
  if (D >= 0)
  {
    printf("Roots: %.2f, %.2f\n", ((-b+sqrt(D))/a), ((-b-sqrt(D))/a));
  }
  else
  {
    printf("Roots: (%.2f%+.2fi), (%.2f%+.2fi)\n", -b/a, sqrt(-D)/a, -b/a, -sqrt(-D)/a);
  }

  return 0;
}
