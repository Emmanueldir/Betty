#include "main.h"

/**
 * times_table - prints multiplication table
 *
 */

void times_table(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			int calc = n * 1;

			_putchar(calc + '0');

			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('calc + '0'');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((calc / 10) + '0');
				_putchar((clac % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
