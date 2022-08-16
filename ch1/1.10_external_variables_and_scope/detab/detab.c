#include <stdio.h>
#define MAXLEN  1000
#define TABLENGTH  8 

int getline_(char str[], int len);

/*
 * replaces tabs in the input with the proper number of 
 * blanks to the next tab stop. 
 * Change TABLENTH above to set tabstop width.
 */
int main()
{
  int i, j, head;
  int len;
  char line[MAXLEN];
  char newline[MAXLEN];
  
  while ((len = getline_(line, MAXLEN)) != 0)
  {
    head = 0;
    for (i=0; i < len; ++i)
    {
      if (line[i] == '\t')
      {
        // insert spaces
        for (newline[head++] = ' ' /* cool */; (head % TABLENGTH) != 0 ; ++head)
        {
          newline[head] = ' ';
        }
      }
      else
      {
        newline[head] = line[i];
        ++head;
      }
    }
    newline[head] = '\0';
    printf("%s", newline);

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
