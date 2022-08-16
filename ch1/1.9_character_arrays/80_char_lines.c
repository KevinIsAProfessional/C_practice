#include <stdio.h>
#define MINLEN    82    /* the minimum length of line to be printed */
#define MAXLEN    1000  /* the maximum length of line to be printed */


int getline_(char line[], int maxlen);

/* prints every line in input that has more than 80 characters, newlines not included */
int main()
{
  int len;
  int c;
  char line[MAXLEN];

  while ((len = getline_(line, MAXLEN)) != 0)
    if (len >= MINLEN)
      printf("%d: %s", len, line);

  return 0;
}

/* takes an input 0 < size < MAXLEN, stores it in a string, returns the length of the string */
int getline_(char str[], int len)
{
  int c, i;

  i = 0;
  while ((i < len-1) && (c = getchar()) != EOF && c != '\n')
    str[i++] = c; 

  if (c == '\n')
    str[i++] = '\n';

  str[i] = '\0';

  return i;
}
