#include "main.h"

/**
 * _strstr - function that locates 1st substring in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located
 * substring or NULL if none is found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *c;

	while (*haystack != '\0')
	{
		b = haystack;
		c = needle;

		while (*haystack != '\0' && *c != '\0' && *haystack == *c)
		{
			haystack++;
			c++;
		}
		if (!*c)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
