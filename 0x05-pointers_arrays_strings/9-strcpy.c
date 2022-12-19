#include <stdio.h>
#include "main.h"

/**
* _strcpy - function copies string pointed to by  src
* @src: source of string parameter
* @dest: destination of string
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
