#include <stdio.h>
#define MAXLEN  1000

int getline_(char str[], int len);

int main()
{
  int i;
  char line[MAXLEN];


  while ((i = getline_(line, MAXLEN)) != 0)
  {
    for (i=i; i >= 0; --i)
      printf("%c", line[i]);
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
