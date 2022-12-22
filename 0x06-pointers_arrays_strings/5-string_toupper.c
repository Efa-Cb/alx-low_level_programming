#include "main.h"

/**
 * string_toupper - Function changes Case of string letters
 * @e: Pointer to string
 *
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *e)
{
	int length;

	length = 0;

	while (e[length] != '\0')

		{
		if (e[length] >= 97 && e[length] <= 122)
			{
			e[length] = e[length] - 32;
		}
		length++;
	}
	return (e);
}
