#include "main.h"

/**
 * print_line - Draws a straghit line according to the parameter
 * @n: number of lines drawn
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
