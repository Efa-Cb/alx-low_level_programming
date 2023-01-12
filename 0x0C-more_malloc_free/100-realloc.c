#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  function reallocates a memory block using malloc and free.
 * @ptr: pointer to previous memory.
 * @old_size: old memory array size.
 * @new_size: new memory array size.
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	relloc = malloc(new_size);

	if (relloc == NULL)
	{
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);

	return (relloc);
}
