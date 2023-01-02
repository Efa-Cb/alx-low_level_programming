#include "main.h"

/**
 * print_chessboard - function  prints the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		_putchar(a[row][column]);
		_putchar('\n');
	}
}
