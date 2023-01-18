#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array && cmp)
	{
		for (e = 0; e < size; e++)
		{
			if (cmp(array[e]) != 0)
				return (e);

		}
	}


	return (-1);
}
