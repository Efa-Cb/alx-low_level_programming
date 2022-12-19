#include <stdio.h>
#include "main.h"

/**
 * swap_int - The function  swaps the values of two integers.
 * @a: first parameter to be provided
 * @b: second parameter to be provided
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
