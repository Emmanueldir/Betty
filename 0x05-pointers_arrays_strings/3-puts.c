#include <stdio.h>

/**
 * _puts - prints a string.
 * @str: the string to be printed
 * Return: 0 (void)
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
