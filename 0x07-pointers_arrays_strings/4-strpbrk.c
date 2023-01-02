#include "main.h"

/**
 * _strpbrk - function  searches a string
 *  for any of a set of bytes.
 *  @s: pointer to input string.
 *  @accept: pointer to string being searched for in @s.
 *Return: pointer to the bytes in @s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
