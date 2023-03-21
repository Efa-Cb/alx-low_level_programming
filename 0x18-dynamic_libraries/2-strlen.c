#include <stdio.h>
#include "main.h"

/**
* _strlen - function prints the length of a string
* @s: string to be provided
*
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}


	return (i);
}
