// program to print multiplication and division of complex numbers
#include <stdio.h>

int main()
{
  float x1, y1, x2, y2;
  printf("Enter complex no 1: ");
  scanf("%f%fi", &x1, &y1);
  printf("Enter complex no 2: ");
  scanf("%f%fi", &x2, &y2);
  printf("Product of complex nos.: %+.2f%+.2fi\n", (x1*x2 - y1*y2), (x1*y2 + x2*y1));
  return 0;
}
