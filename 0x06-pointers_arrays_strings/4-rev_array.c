#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: number of elements of the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j, temp;

	while (i < n - 1)
	{
		j = i + 1;

		while (j > 0)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
		j--;
	}
	i++;
}
