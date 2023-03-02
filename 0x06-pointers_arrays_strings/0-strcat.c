#include "main.h"

/**
 * *_strcat - concatenates two strings
 * *dest - string to be concatenated
 * *src - string to be concatenated
 * Return - a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	char *dest[20] = "Hello";
	char *src[] = "World!";


	*_strcat(*dest, *src);


	_putchar('%p', *dest);
}
