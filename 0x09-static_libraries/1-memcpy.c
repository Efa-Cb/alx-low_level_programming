#include "main.h"
/**
* char *_memcpy - the function copies n bytes from
* a memory area src to memory area dest.
* @dest: destination to be copied to.
* @src: the  source.
* @n: number of bytes of source.
* Return: Always 0 (success)
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
