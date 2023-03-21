#include "main.h"

/**
* _strchr - function locates a character in a string.
* @s: pointer to our string array input
* @c: target characer to be located
* Return: first occurence of charatcer or null if not found.
*
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
