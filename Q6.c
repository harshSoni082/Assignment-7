// program which reads a vector and outputs a unit vector in same direction
#include <stdio.h>
#include <math.h>

int main()
{
  float x, y, z, mag;
  printf("Enter vector: ");
  scanf("%fi%fj%fk", &x, &y, &z);
  mag = sqrt(pow(x, 2)+pow(y, 2)+pow(z, 2));
  printf("Unit vector: %+.2fi%+.2fj%+.2fk\n", (x/mag), (y/mag), (z/mag));
  return 0;
}
