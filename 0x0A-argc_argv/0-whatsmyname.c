#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

/**
 * main - function to print filename
 * @argc: argument count
 * @argv: string that store argc's argument
 * Return: 0 success'
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);

	}
	return (0);
}
