#include <stdio.h>

#define WORDLENGTH  15
/* prints a histogram of the lengths of words in the input */

int main()
{
  int c, count, i, j;
  int wlength[WORDLENGTH];

  for (i = 0; i < WORDLENGTH; ++i)
    wlength[i] = 0;

  count = 0;
  while ((c = getchar()) != EOF) 
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      ++wlength[count];
      count = 0;
      for (c = c; c == ' ' || c == '\n' || c == '\t'; c = getchar())
        ;
    }
    ++count;
  }


  for (i = 0; i < WORDLENGTH; ++i)
  {
    printf("\n%2d: ", i);
    for (j = wlength[i]; j > 0; --j)
      printf("|");
  }


  return 0;
}
