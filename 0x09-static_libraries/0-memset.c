#include "main.h"

/**
 * _memset - function fills memory with constant byte.
 * fills the first n bytes of the memory area pointed
 * to by s with the constant b.
 * @s: pointer to block of memory to fill.
 * @b: constant to fill s  with.
 * @n: bytes of the memory area to be filled.
 *
 * Return: pointer to the  filled memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
