#include "main.h"

/**
 * _strcmp - function that compares 2 strings
 * @s1: parameter to be compared
 * @s2: 2nd parameter to be compared
 * Return: 0 (equal), other number (otherwise)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
