#include "main.h"

/**
 * _islower - Checks for lowercase alphabets
 *
 * @c: the parameter to be checked
 *
 * Return: 1 (lowercase) 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
