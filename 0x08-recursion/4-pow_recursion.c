#include "main.h"

/**
 * _pow_recursion - prints the value of int x raises to
 * the power of int y
 * @x: integer x
 * @y: integer y
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
