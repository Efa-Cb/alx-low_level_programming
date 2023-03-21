#include"main.h"

/**
 * _puts - function  prints a string, followed by a newline to stdout
 * @str: value of pointer
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		 i++;
	}

	_putchar('\n');
}
