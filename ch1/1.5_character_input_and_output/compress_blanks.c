#include <stdio.h>

/* returns an input, replacing each string of 
 * one or more blanks by one blank */
int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      printf("%c", c);
    for (c = c; c == ' '; c = getchar())
      ;
    printf("%c", c);
  }

  return 0;
}
