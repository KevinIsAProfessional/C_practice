#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
      printf("\\t");
    else if (c == 8)         /* ascii representation of \b */
      printf("\\b");   
    else if (c == '\\')
      printf("\\\\");
    else 
      printf("%c", c);

  }
  printf("\n");

  return 0;
}
