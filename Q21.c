// Modify Q20 program so that product of every group is calculated. Then their sum is done
#include <stdio.h>

int main()
{
  int i, j, n, m, number, prod, sum = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter m: ");
  scanf("%d\n", &m);
  for(i=0; i<n; i++)
  {
    prod = 1
    scanf("%*c");
    for(j=0; j<m; j++)
    {
      scanf("%d%*c", &number);
      prod *= number;
    }
    sum += prod;
  }
  printf("Sum: %d\n", sum);
  return 0;
}
