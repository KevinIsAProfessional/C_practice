#include <stdio.h>

#define UPPER   300.0
#define LOWER   0.0
#define STEP    20.0

float f_to_c(float fahr);
float c_to_f(float cel);

/* test both conversion functions */
int main()
{
  float i;

  printf("Fahrenheit to Celsius:\n");
  printf("Fah    Cel\n");
  printf("---    ---\n");
  
  i = LOWER;
  while (i <= UPPER) {
    printf("%3.0f %6.1f\n", i, f_to_c(i));
    i = i + STEP;
  }
    

  printf("Celsius to Fahrenheit:\n");
  printf("Cel    Fah\n");
  printf("---    ---\n");
  
  i = LOWER;
  while (i <= UPPER) {
    printf("%3.0f %6.1f\n", i, c_to_f(i));
    i = i + STEP;
  }

  return 0;
}

float f_to_c(float fahr)
{
  return (5.0/9.0) * (fahr-32.0);
}

float c_to_f(float cel)
{
  return ((9.0/5.0) * cel) + 32.0;
}
