// program which reads n and m. The program reads n group of numbers. Every group has m numbers. The program finds the sum of all numbers
#include <stdio.h>

int main()
{
  int i, j, n, m, number, sum = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter m: ");
  scanf("%d\n", &m);
  for(i=0; i<n; i++)
  {
    scanf("%*c");
    for(j=0; j<m; j++)
    {
      scanf("%d%*c", &number);
      sum += number;
    }
  }
  printf("Sum: %d\n", sum);
  return 0;
}
