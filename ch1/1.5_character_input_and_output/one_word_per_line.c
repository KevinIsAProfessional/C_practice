#include <stdio.h>

#define IN  1 /* in a word */
#define OUT 0 /* out of word */

/* prints input one word per line */
int main()
{
  int c, status;
  
  status= OUT;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      printf("\n");
    }
    for (c = c; c == ' ' || c == '\n' || c == '\t'; c = getchar())
      ;
    if (c != EOF)
      printf("%c", c);
  }
  
  return 0;
}


/*
 * While c is not EOF
 *  if c is blank
 *    eat all blanks
 *    print newline
 *  else
 *    print c 
 */      
