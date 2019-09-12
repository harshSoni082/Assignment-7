// Read a float number and print it by adding 17. Do not use %f
#include <stdio.h>
#include <math.h>

int main()
{
  int x, y;
  printf("Enter value: ");
  scanf("%d.%d", &x, &y);
  printf("Result: %d.%d\n", x+17, y);
  return 0;
}
