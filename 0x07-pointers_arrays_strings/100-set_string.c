#include "main.h"

/**
 * set_string - function sets the value of a pointer to a char.
 * @s: variable of type pointer
* @to: char
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
