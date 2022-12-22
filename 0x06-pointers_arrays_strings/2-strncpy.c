#include "main.h"

/**
 * _strncpy - Function  copies a string
 * @dest: Pointer to  char to be changed
 * @src: Pointer to  char to be changed
 *  @n: value
 *
 *  Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
