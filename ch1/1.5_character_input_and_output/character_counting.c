#include <stdio.h>

/* count characer in input; v2 */

int main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);

  return 0;
}