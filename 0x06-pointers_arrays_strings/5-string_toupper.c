#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input
 * Return: the pointer to destination
 */

char *string_toupper(char *s)
{
	int str = 0;

	while (*(s + str) != '\0')
	{
		if ((*(s + str) >= 97) && (*(s + str) <= 122))
		{
			*(s + str) = *(s + str) - 32;
		}
		str++;
	}
	return (s);
}
