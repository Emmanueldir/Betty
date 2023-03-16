#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates 2 array
 * @min: minimum value contianed in an array
 * @max: maximum value contained in an array
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
