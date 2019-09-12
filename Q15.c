// Modify Q14 program
#include <stdio.h>

int main()
{
  int i, n, number, sum = 0;
  scanf("%d,", &n);
  for(i=0; i<n; i++)
  {
    if(i == n-1)
    {
      scanf("%d", &number);
    }
    else
    {
      scanf("%d,", &number);
    }
    sum += number;
  }
  printf("Sum: %d\n", sum);
  return 0;
}
