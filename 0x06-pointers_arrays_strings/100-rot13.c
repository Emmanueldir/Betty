#include "main.h"

/**
 * rot13 - function that encodes a string
 * @s: input
 * Return: to dest
 */

char *rot13(char *s)
{
	int i;
	int k = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (*(s + k) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + k) == alphabet[i])
			{
				*(s + k) = rot13[i];
				break;
			}
		}
		k++;
	}
	return (s);
}
