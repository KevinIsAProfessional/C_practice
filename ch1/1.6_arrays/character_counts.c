#include <stdio.h>

#define CNUM  27 /* number of valid characters (26 letters + 1 other) */

/* prints the frequencies of different characters in the input */
int main()
{
  int c, i, j;
  int charcount[CNUM];

  for (i = 0; i < CNUM; ++i)
    charcount[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= 'a' && c <= 'z')
      ++charcount[c - 'a'];
    else if (c >= 'A' && c <= 'Z')
      ++charcount[c - 'A'];
    else
      ++charcount[26];
  }

  for (i = 0; i < CNUM-1; ++i)
  {
    printf("\n    %c: ", i+'a');
    for (j = charcount[i]; j > 0; --j)
      printf("|");
  }
  
  printf("\nother: ");
  for (j = charcount[26]; j > 0; --j)
    printf("|");


  

  return 0;
}
