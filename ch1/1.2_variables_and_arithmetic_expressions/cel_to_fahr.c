#include <stdio.h>

int main()
{
  float fahrenheit, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300.0;
  step = 20.0;

  celsius = lower;
  printf("Cel   Fah\n");
  printf("---   ---\n");
  while (celsius <= upper) 
  {
    fahrenheit = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %5.0f\n", celsius, fahrenheit);

    celsius = celsius + step;
  }
  return 0;
}
