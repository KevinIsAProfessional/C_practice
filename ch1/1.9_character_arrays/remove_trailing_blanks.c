#include <stdio.h>
#define MAXLEN 1000

int getline_(char str[], int len);

int main()
{
  int i;
  char line[MAXLEN];

  /* Read a line into a chararray */
  while ((i = getline_(line, MAXLEN)) != 0)
  {
    /* iterate backwards through the array until you find a non-blank char */
    while ((line[i] == '$' || line[i] == '\0' || line[i] == '\n' || line[i] == ' ' || line[i] == '\t') && i >= 0)
      --i;

    /* after the non-blank, add \n and \0 */
    line[++i] = '\n';
    line[++i] = '\0';

    /* if line length is greater than 2, print the line */
    if (i > 2)
      printf("%s", line);


  }

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
