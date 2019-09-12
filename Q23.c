// program which reads a number and finds its second digit
#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter a number: ");
  scanf("%1d%1d%*d", &x, &y);
  printf("Second digit: %d\n", y);
  return 0;
}
