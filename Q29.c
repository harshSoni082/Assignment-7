// program which reads n and 2n numbers
#include <stdio.h>
#include <math.h>

int main()
{
  int n, x, y, sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  for(int i=0; i<2*n; i++)
  {
    scanf("%d,%d,", &x, &y);
    sum = pow(x, y);
  }
  printf("Sum: %d\n", sum);
  return 0;
}
