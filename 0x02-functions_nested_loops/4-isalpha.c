#include "main.h"

/**
 * _isalpha - checks for alphabet chacrater
 *
 * Return: 1 (success) 0 (otherwise)
 *
 * @c: the progm to be checked
 */

int _isalpha(int c)
{
	if ((c >= 97 && c - 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
