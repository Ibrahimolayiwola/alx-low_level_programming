#include "main.h"
/**
 * printAlpha- print alphabets except b and j
 *
 * Return: void
 */
void printAlpha(void)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == 66 || i == 74)
		continue;
		_putchar(i);
		_putchar('\n');
	}
}
