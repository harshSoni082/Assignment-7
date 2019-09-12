// program which reads a number and finds its first even digit
#include <stdio.h>

int main()
{
  int n, even, z;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(n > 0)
  {
    z %= 10
    n /= 10
    if (!(z & 1))
    {
      even = z
    }
  }
  printf("First even digit: %d\n", even);
  return 0;
}
