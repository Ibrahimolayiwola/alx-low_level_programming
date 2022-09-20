#include "main.h"
/**
 *printalpha - prints alphabet except b and j
 *
 *Return : 0
 */
void printAlpha(void)
{
  int i;
  for (i = 65; i <= 90; i++)
    {
      if (i == 66 || i == 74)
	continue;
      _putchar(i);
    }
  _putchar('\n');
}
	  
