#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @x: parameter to be checked
 * Return: 1 for character that will be a digit 0 for otherwise
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
