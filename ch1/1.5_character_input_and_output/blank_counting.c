#include <stdio.h>

int main() 
{
  int c, bc;

  bc = 0;
  while ((c = getchar()) != EOF)
    if (c == '\t' || c == ' ' || c == '\n')
      ++bc;
  printf("%d\n", bc);
  return 0;
}
