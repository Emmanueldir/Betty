#include "main.h"

/**
 * leet - encodes a string
 * @s: input
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int count = 0, i;
	int lowletters[] = {97, 101, 111, 116, 108};
	int upletters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowletters[i] || *(s + count) == upletters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
