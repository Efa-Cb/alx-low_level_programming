#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array to be created.
 * @c: char to initializes the array c.
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *e;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	e = (char *) malloc(sizeof(char) * size);

	if (e == NULL)
		return (0);

	while (i < size)
	{
		*(e + i) = c;
		i++;
	}

	*(e + i) = '\0';

	return (e);
}




