#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}

/**
 * print_error - prints Error, followed by a new line, to standard error
 *
 * Return: void
 */
void print_error(void)
{
	int i = 0;
	char *error = "Error\n";

	while (*(error + i))
	{
		_putchar(*(error + i));
		i++;
	}
}
