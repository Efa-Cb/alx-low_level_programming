#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function allocates memory using malloc.
 * @b: amount of bytes.
 *
 * Return: 0 means program was successful.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
