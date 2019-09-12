// program which reads a number and finds its 4th digit
#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter a number: ");
  scanf("%3d%1d%*d", &x, &y);
  printf("4th digit: %d\n", y);
  return 0;
}
