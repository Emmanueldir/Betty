#include "main.h"

/**
 * print_most_numbers - prints nubers from 0-9
 * Description: prints d numbers except 2 & 4
 * Return: numbers from 0-9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
