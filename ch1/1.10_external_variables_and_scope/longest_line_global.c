#include <stdio.h>
#define MAXLEN  1000

int max;
char line[MAXLEN];
char longest[MAXLEN];

int getline_(void);
void copy(void);


int main()
{
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getline_()) > 0)
    if (len > max)
    {
      max = len;
      copy();
    }
  if (max > 0)
    printf("%s", longest);

  return 0;
}

int getline_()
{
  int c, i;
  extern char line[];

  for (i=0; i < MAXLEN -1 && (c=getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n') 
  {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}


void copy()
{
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
