#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed then a new line
 * @argc: argument count
 * @argv: string
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	argv[0] = "\0";
	argc = argc - 1;

		printf("%d\n", argc);

	return (0);
}
