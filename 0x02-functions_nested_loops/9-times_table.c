#include "main.h"

/**
 * times_table - prints multiplication table
 *
 */

void times_table(void)
{
	int i, n;
	int calc = n * 1;

	for (n = 0; n < 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(calc + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
