// program, which reads coordinates of two points and outputs their mid-point.
#include <stdio.h>

int main()
{
  float x1, y1, x2, y2;
  printf("Enter coortinate 1: ");
  scanf("(%f,%f)", &x1, &y1);
  printf("Enter coortinate 2: ");
  scanf("(%f,%f)", &x2, &y2);
  printf("Mid-point: (%.3f,%.3f)\n", (x1+x2)/2, (y1+y2)/2);
  return 0;
}
