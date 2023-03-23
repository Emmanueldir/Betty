#include "function_pointers.h"

/**
 * print_name - function to print name
 * @*f: pointer to function
 * *name: name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
