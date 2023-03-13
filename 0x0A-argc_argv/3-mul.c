#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - outputs the multiplication of 2 numbers
 * @argc: argumrnt count
 * @argv: argument string
 * Return: 0 success, 1 error
 */

int main(int argc, char **argv)
{
	int i;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");

		exit(1);

		return (1);
	}


	for (i = 1; i < argc; i++)
	{
		int result;
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);

}
