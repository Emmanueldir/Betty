#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated
 * @src: source
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int str1 = 0;
	int str2 = 0;

	while (*(dest + str1) != '\0')
	{
		str1++;
	}

	while (str2 >= 0)
	{
		*(dest + str1) = *(src + str2);
		if (*(src + str2) == '\0')
		{
			break;
		}
		str1++;
		str2++;
	}
	return (dest);
}
