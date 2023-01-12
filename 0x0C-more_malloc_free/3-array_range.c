#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers.
 *
 * @min: min number of elements.
 * @max: max number of elements.
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
