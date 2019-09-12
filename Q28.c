// program which reads n and n complex numbers and outputs their sum
#include <stdio.h>

int main()
{
  float x, y, sum_real = 0, sum_comp = 0;
  int n;
  printf("Enter value of n: ");
  scanf("%d", &n);
  for(int i=0; i<n; i++)
  {
    scanf("%f%fi", &x, &y);
    sum_real += x;
    sum_comp += y;
  }
  printf("Sum of complex nos: %+.2f%+.2fi\n", sum_real, sum_real);
  return 0;
}
