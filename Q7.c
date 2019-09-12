// program to output the cross product of vectors
#include <stdio.h>

int main()
{
  float x1, y1, z1, x2, y2, z2;
  printf("Enter vector 1: ");
  scanf("%fi%fj%fk", &x1, &y1, &z1);
  printf("Enter vector 2: ");
  scanf("%fi%fj%fk", &x2, &y2, &z2);
  printf("Dot product: %+.2fi%+.2fj%+.2fk\n", (y1*z2 - y2*z1), (x1*z2 - x2*z1), (x1*y2 - x2*y1));
  return 0;
}
