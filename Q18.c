// program which reads n and a vector in n dimensional space. The program outputs the magnitude
#include <stdio.h>
#include <math.h>

int main()
{
  int i, n;
  float number, mag = 0;
  printf("Enter n: ");
  scanf("%d\n", &n);
  scanf("%*1c");
  for(i=0; i<n; i++)
  {
    scanf("%f%*1c", &number);
    mag += pow(number, 2);
  }
  mag = sqrt(mag);
  printf("magnitude of vector: %.2f\n", mag);
  return 0;
}
