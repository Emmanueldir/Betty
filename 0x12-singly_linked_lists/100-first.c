#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) printt(void);

/**
 * printt - prints a sentence
 * Returns: nothing
 */

void printt(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
