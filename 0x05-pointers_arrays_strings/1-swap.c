#include <stdio.h>

/**
 * swap_int - swaps the value of 2 integers
 * @a: the first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b) /*functions that swaps the value of two integer*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
