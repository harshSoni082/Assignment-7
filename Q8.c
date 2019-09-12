// program which reads two complex numbers and prints their sum
#include <stdio.h>

int main()
{
  float x1, y1, x2, y2;
  printf("Enter complex no 1: ");
  scanf("%f%fi", &x1, &y1);
  printf("Enter complex no 2: ");
  scanf("%f%fi", &x2, &y2);
  printf("Sum of complex nos.: %+.2f%+.2fi\n", (x1+x2), (y1+y2));
  return 0;
}
