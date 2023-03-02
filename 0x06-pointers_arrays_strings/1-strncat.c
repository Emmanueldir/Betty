#include "main.h"

/**
 * *_strncat - concatenates teo strings
 * @dest: destination
 * @src: source
 * @n: number of bytes used from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str = 0;
	int str1 = 0;

	while (*(dest + str) != '\0')
	{
		str++;
	}
	while (str1 < n)
	{
		*(dest + str) = *(src + str1);
		if (*(src + str1) == '\0')
		{
			break;
		}
		str++;
		str1++;
	}
	return (dest);
}
