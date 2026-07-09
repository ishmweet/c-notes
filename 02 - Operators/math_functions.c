#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x = 45;

  //x = sqrt(x);          // prints the square root of the defined value
  //x = pow(x, 2);        // prints the power
  //x = round(x);         // rounds off
  //x = ceil(x);          // rounds off to the higher side
  //x = floor(x);         // rounds off to the lower side
  //x = abs(x);           // absolute value func - gives the distance from zero
  //x = log(x);           // prints the logarithmic value
  //x = sin(x);           // trignometric operations
  //x = cos(x);
  x = tan(x);

  printf("%f\n", x);

  return 0;
}
