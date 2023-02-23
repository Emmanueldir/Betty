#include "main.h"

/**
 * print_times_table - outputs the multiplication of given value
 * @n: parameter
 * Return: 0
 */

void print_times_table(int n)
{
	int i;

	for (n = 0; n < 13; n++)
	{
		for (i = -; i <= 12; i++)
		{
			int calc = n * i;

			_putchar(calc + '0');

			if (i < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(calc + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((calc / 10) + '0');
				_putchar((calc % 10) + '0');
			}
		}
		_putchar('\n');
	}	
}
