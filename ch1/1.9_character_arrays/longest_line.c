#include <stdio.h>
#define MAXLEN  1000

int getline_(char line[], int maxlen);
void copy(char new[], char old[]);


int main()
{
  int len;
  int max;
  int c;
  char line[MAXLEN];
  char longest[MAXLEN];

  max = 0; 
  while ((len = getline_(line, MAXLEN)) != 0)
  {
    /* if the last char of line is not \n, the line length exceeds MAXLEN */
    /* continue incrementing len until \n is reached */
    if (len == MAXLEN-1 && line[len-1] != '\n')
      while ((c = getchar()) != EOF && c != '\n')
        len++;

    if (len > max)
    {
      max = len;
      copy(line, longest);
    }
  }

  printf("%d: %s", max, longest);

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

/* copy new string to old string */
void copy(char new[], char old[])
{
  int i = 0;

  while (new[i] != '\0')
    old[i++] = new[i];

  old[i] = '\0';
}
