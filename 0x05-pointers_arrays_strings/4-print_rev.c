#include <stdio.h>
#include "main.h"

/**
 * print_rev -  function prints a string in reverse followed by a new line
 *
 * @s: parameter of pointer
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
