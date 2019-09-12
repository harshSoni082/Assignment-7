// program which reads a vector and prints it in nice looking form

// #### BUG

#include <stdio.h>

int main()
{
  float x, y, z;
  printf("Enter vector: ");
  scanf("%fi%fj%fk", &x, &y, &z);
  if((x > 0) && (y > 0) && z > 0)
  {
    printf("Vector: %+.2fi%+.2fj%+.2fk\n", x, y, z);
  }
  else if(x == 0)
  {
    printf("Vector: %+.2fj%+.2fk\n", y, z);
  }
  else if(y == 0)
  {
    printf("Vector: %+.2fi%+.2fk\n", x, z);
  }
  else if(z == 0)
  {
    printf("Vector: %+.2fi%+.2fj\n", x, y);
  }
  else
  {
    printf("Vector: %+.2fi%+.2fj%+.2fk\n", x, y, z);
  }
  return 0;
}
