// program which reads two numbers (k and x). The program finds the kth digit of x
#include <stdio.h>

int main()
{
  int x, k;
  printf("Enter k: ");
  scanf("%d", &k);
  printf("Enter a number: ");
  for(int i=0; i<k-1; i++)
  {
    scanf("%*1d");
  }
  scanf("%1d%*d", &x);
  printf("%dth digit: %d\n", k, x);
  return 0;
}
