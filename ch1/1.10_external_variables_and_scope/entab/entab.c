#include <stdio.h>
#define MAXLEN  1000
#define TABLENGTH  8 

int getline_(char str[], int len);

/*
 * replaces repeated spaces with the proper number of 
 * tabs and spaces to achieve the same spacing. 
 * Change TABLENTH above to set tabstop width.
 */

int main() 
{
  int line_head, newline_head;
  int blank_count, len;
  char line[MAXLEN];
  char newline[MAXLEN];

  while ((len = getline_(line, MAXLEN)) != 0)
  {
    for (line_head = 0; line_head < len; ++line_head)
    {
      if (line[line_head] == ' ')
      {
        for (blank_count = 0; line[line_head] == ' '; line_head++, blank_count++)
        {
          if ((line_head % TABLENGTH) == TABLENGTH - 1)
          {
            newline[newline_head++] = '\t';
            blank_count = 0;
          }
        }
        for (;blank_count > 0; --blank_count)
        {
          newline[newline_head++] = ' ';
        }
        newline[newline_head++] = line[line_head];
      }
      else
      {
        newline[newline_head++] = line[line_head]; 
      }
    }
    newline[newline_head] = '\0';
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
