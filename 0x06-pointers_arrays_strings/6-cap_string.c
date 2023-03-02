#include "main.h"

/**
 * cap_string - function that capitalize word in a string
 * @s: input
 * Return: to dest
 */

char *cap_string(char *s)
{
	int i;
	int k = 0;
	int spwords[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 124};

	if (*(s + k) >= 97 && *(s + k) <= 122)
	{
		*(s + k) = *(s + k) - 32;
	}
	k++;

	while (*(s + k) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + k) == spwords[i])
			{
				if ((*(s + (k + 1)) >= 97) && (*(s + (k + 1)) <= 122))
				{
					*(s + (k + 1)) = *(s + (k + !)) -32;
				}
				break;
			}
		}
		k++;
	}
	return (s);
}
